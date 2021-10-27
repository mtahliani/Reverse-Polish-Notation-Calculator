//
// Created by Milan Tahliani on 10/25/21.
//
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#ifndef PS3_LIST_H
#define PS3_LIST_H
typedef struct node node;

bool addNode(node* node); //Add a node to the list
node* findNode(int value); //Find a node in the list
bool deleteNode (node* node); //Delete a node in the list
void printList(void); //Print the values in the list

#endif //PS3_LIST_H
