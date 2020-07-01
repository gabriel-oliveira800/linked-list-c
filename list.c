#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct pos
{
    int x;
    int y;
};

struct list_object
{
    Pos* data;
    struct list_object* prox;
};

typedef struct pos Pos;
typedef struct list_object List;

List* init()
{
    return NULL;
}

void add(List** my_list, int x, int y)
{
    List* node = (List*) malloc(sizeof(List));
    Pos* posicao = (Pos*) malloc(sizeof(Pos));

    if(node != NULL && posicao != NULL)
    {
        posicao->x = x;
        posicao->y = y;

        node->data = posicao;

        node->prox = *my_list;
        *my_list = node;
    }
}

void toString(List* data)
{
    while(data != NULL)
    {
        printf("x: %d - y: %d\n", data->data->x, data->data->y);
        data = data->prox;
    }
}
