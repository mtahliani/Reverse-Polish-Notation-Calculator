//
// Created by Milan Tahliani on 11/8/21.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef PS4_STACK_H
#define PS4_STACK_H

void printt();

typedef struct node node;

bool push(node* node);
//push a node to top of the stack

node* pop();
//pop the top of the stack

node* peek();
//return reference to node on top of stack

void clearStack();
//clears the stack

void printList();

#endif //PS4_STACK_H
