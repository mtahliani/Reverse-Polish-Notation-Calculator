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

enum type{operator, number};

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
    if (HEAD -> next != NULL) {

    }
}

node* peek() {

    if (HEAD -> next == NULL){
        return HEAD;
    }
    else {
        return HEAD->next;
    }
}

void clearStack(){

}

void printList(){
    node* pointer = HEAD;
    while (pointer != NULL){
        printf("%f\n", pointer->value);
        pointer = pointer -> next;
    }
}


