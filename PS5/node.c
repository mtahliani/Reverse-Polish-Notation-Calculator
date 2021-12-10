//
// Created by Milan Tahliani on 12/6/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "node.h"
#include "stack.h"
#include "errors.h"
#include "rpn.h"


typedef struct node {
    union {
        double value;
        char operator;
    } contents;
    int type;
    int precedence;
    double value;
    node *next;
} node;



node* createNode (double value, int type) {

    node* node1 = (node*) malloc(sizeof(node));
    //use malloc to dynamically allocate
    if (node1 == NULL) {
        exit(EXIT_FAILURE);
    }

    if (type == number) {
        node1 -> contents.value = value;
    } else {
        node1 -> contents.operator = (char) value;
        node1 -> precedence = assignRank((char) value);
    }
    node1 -> type = type;
    node1 -> next = NULL;

    return node1;
}

int assignRank(char operator) {
    //returns precedence for each operator
    if (operator == '(' || operator == ')') {
        return 1;
    } else if (operator == '+' || operator == '-') {
        return 2;
    } else if (operator == '*' || operator == '/') {
        return 3;
    } else if (operator == '^') {
        return 4;
    } else {
        return -1;
        //error handling in rpn.c
    }
}


