#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct pos {
    int x;
    int y;
};

struct list_object {
    Pos* data;
    struct list_object* prox;
};

typedef struct pos Pos;
typedef struct list_object List;

List* init(){
    return NULL;
}

void add(List* my_list, int* x, int* y){

}

void addAll(List* my_list, Pos* data){
}
