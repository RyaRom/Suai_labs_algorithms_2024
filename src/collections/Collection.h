//
// Created by locadm on 9/11/2024.
//

#ifndef COLLECTION_H
#define COLLECTION_H

typedef struct Collection {
    void* (*add_int_elem)(void* self, int data);
    void* (*display)(const void* self);
    void* (*remove_int_elem)(void* self, int data);
    void* (*get_int_elem)(const void* self, int data);
} Collection;

#endif //COLLECTION_H
