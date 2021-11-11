//
// Created by Milan Tahliani on 10/25/21.
//

#include <stdio.h>
#include "node.h"
#include "list.h"
typedef struct node {
    int value;
    struct node* next;
} node;

node* createNode(int value) {
    //printf("HELLO");

    node* node1 = (node*) malloc(sizeof(node));
    //printf("HELLO");

    //use malloc to dynamically allocate
    if (node1 == NULL) {
        exit(EXIT_FAILURE);
    }
    node1 -> value = value;

    node1 -> next = NULL;
    printf("HELLO");

    //return node1;
}



