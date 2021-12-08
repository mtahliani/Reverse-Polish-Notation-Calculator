//
// Created by Milan Tahliani on 12/7/21.
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

node* push(node* node) {
    if (node == NULL){
        return NULL;
        //invalid input
    }

    if (HEAD == NULL) {
        HEAD = node;
        return node;
        //list is empty
    }
    node -> next = HEAD;
    HEAD = node;
    return node;

}


node *pop(void) {
    // Checks for empty stack
    if (!HEAD) {
        return NULL;
    } else {
        // Moves head down stack and tracks former node
        node *current = HEAD;
        HEAD = current->next;

        return current;
    }
}
node* peek() {

    node* tempPtr = HEAD;
    if (HEAD == NULL){
        return NULL;
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

