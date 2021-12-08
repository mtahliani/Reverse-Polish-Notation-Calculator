//
// Created by Milan Tahliani on 12/7/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef PS5_STACK_H
#define PS5_STACK_H


typedef struct node node;

node* push(node* node);
//push a node to top of the stack

node* pop(void);
//pop the top of the stack

node* peek();
//return reference to node on top of stack

void clearStack();
//clears the stack

void printList();

bool isEmpty();

#endif //PS5_STACK_H