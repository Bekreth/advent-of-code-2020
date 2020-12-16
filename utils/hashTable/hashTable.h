#ifndef hash_table_h
#define hash_table_h

#include <stdio.h>
#include <stdbool.h>

typedef struct Entry {
    int size;
    int capacity;
    void** data;
} Entry;

typedef struct HashTable {
    int size;
    int capacity;
    Entry** data;
} HashTable;

HashTable* newHashTable(unsigned int size);
void freeHashTable(HashTable* hashTable);

extern unsigned int hash(void* data);
extern bool equals(void* data1, void* data2);

void addData(HashTable* hashTable, void* data);
void removeData(HashTable* hashTable, void* data);
bool exists(HashTable* hashTable, void* data);

void printHashTable(HashTable* table);
void printEntry(Entry* entry);

#endif