#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */


typedef struct hash_table_entry {
  char *key;
  char *value;
  struct hash_table_entry *next;
} hash_table_entry_t;

typedef struct {
  unsigned long int size;
  hash_table_entry_t **entries;
} hash_table_t;

unsigned long int hash(const char *key, unsigned long int size) {
  unsigned long int hash = 5381;
  int c;

  while ((c = *key++)) {
    hash = ((hash << 5) + hash) + c;
  }

  return hash % size;
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value) {
  if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL) {
    return 0;
  }

  unsigned long int index = hash(key, ht->size);
  hash_table_entry_t *entry = ht->entries[index];

  while (entry != NULL) {
    if (strcmp(entry->key, key) == 0) {
      // Key already exists, update value
      free(entry->value);
      entry->value = strdup(value);
      return 1;
    }
    entry = entry->next;
  }

  // Key does not exist, create new entry
  hash_table_entry_t *new_entry = malloc(sizeof(hash_table_entry_t));
  if (new_entry == NULL) {
    return 0;
  }

  new_entry->key = strdup(key);
  new_entry->value = strdup(value);
  new_entry->next = ht->entries[index];
  ht->entries[index] = new_entry;

  return 1;
}

