//
// Created by Milan Tahliani on 11/8/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "node.h"
#include "stack.h"
#include "errors.h"
#include "rpn.h"

typedef struct node {
    double value;
    int type;
    node *next;
} node;



node* createNode (double value, int type) {

    node* node1 = (node*) malloc(sizeof(node));
    //use malloc to dynamically allocate
    if (node1 == NULL) {
        exit(EXIT_FAILURE);
    }
    node1 -> value = value;
    node1 -> type = type;
    node1 -> next = NULL;

    //return node1;
}



