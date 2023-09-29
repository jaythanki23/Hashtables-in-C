#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#include "hash_table.h"

static ht_item* ht_new_item(const char* k, const char* v) {
  ht_item* ptr = malloc(sizeof(ht_item));
  ptr->key = strdup(k);
  ptr->value = strdup(v);
  return ptr;  
}

ht_hash_table* ht_new() {
  ht_hash_table* ht = malloc(sizeof(ht_hash_table));

  ht->size = 53;
  ht->count = 0;
  ht->items = calloc((size_t)ht->size, sizeof(ht_item*));
}

int main() {
  printf("Hello World");
}



