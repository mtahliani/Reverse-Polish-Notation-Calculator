//
// Created by Milan Tahliani on 11/8/21.
//

#include "stack.h"
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
    struct node *next;
} node;


node* HEAD = NULL;

bool push(node* node) {
    if (node == NULL){
        return false;
        //invalid input
    }

    if (HEAD == NULL) {
        HEAD = node;
        return true;
        //list is empty
    }
    node -> next = HEAD;
    HEAD = node;
    return true;
}

node* pop() {

    if (HEAD == NULL) {
        printf("There is nothing to pop as the stack is empty.");
        exit (EXIT_FAILURE);
    }

    else {
        node* popper = HEAD;
        HEAD = popper -> next;
        return popper;
    }
}

node* peek() {

    node* tempPtr = HEAD;
    if (HEAD == NULL){
        printf("The stack is empty.");
        exit (EXIT_FAILURE);
    }
    else {
        return tempPtr;
    }
}

void clearStack(){

    while (HEAD) {
        node* popper = pop();
        free(popper);
        popper = NULL;
    }
}

void printList(){
    node* pointer = HEAD;
    while (pointer != NULL){
        printf("%f\n", pointer->value);
        pointer = pointer -> next;
    }
}

bool isEmpty() {
    if (HEAD == NULL){
        return true;

    }
    else {
        return false;
    }
}


