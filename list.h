#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct pos Pos;
typedef struct list_object List;

List* init();

void addAll(List* my_list, Pos* data);
void add(List* my_list, int* x, int* y);

void toString(List* data);

#endif // LIST_H_INCLUDED
