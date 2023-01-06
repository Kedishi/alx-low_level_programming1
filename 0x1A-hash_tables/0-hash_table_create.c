#include <stdlib.h>
#include <string.h>

/** creates a hash table**/

typedef struct hash_table_entry {
  char *key;
  void *value;
  struct hash_table_entry *next;
} hash_table_entry_t;

typedef struct {
  unsigned long int size;
  hash_table_entry_t **entries;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size) {
  hash_table_t *hash_table = malloc(sizeof(hash_table_t));
  if (hash_table == NULL) {
    return NULL;
  }

  hash_table->size = size;
  hash_table->entries = calloc(size, sizeof(hash_table_entry_t *));
  if (hash_table->entries == NULL) {
    free(hash_table);
    return NULL;
  }

  return hash_table;
}

