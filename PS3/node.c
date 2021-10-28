//
// Created by Milan Tahliani on 10/25/21.
//

#include <stdio.h>
#include <stdbool.h>
#include "node.h"
#include "list.h"
#include <stdlib.h>
typedef struct node {
    int value;
    struct node* next;
} node;

node* createNode(int value) {
    node* node1 = (node*) malloc(sizeof(node));
    if (node1 == NULL) {
        exit(EXIT_FAILURE);
    }
    node1 -> value = value;
    node1 -> next = NULL;
}



