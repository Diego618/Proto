#ifndef VECTOR_H
#define VECTOR_H

typedef struct {
    int* location; //pointer to beginning of vector
    size_t size; //how much of the vector is currently in use 
    size_t capacity; //how much space the vector has
} vector;

void vect_init (vector* v, size_t capacity);
void vect_push (vector* v, int value);
int vect_resize (vector* v);
void vect_free (vector* v);
void vect_print (vector* v);

#endif