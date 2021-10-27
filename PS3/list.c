//
// Created by Milan Tahliani on 10/25/21.
//

#include "list.h"
#include "node.h"
#include <stdbool.h>
#include <stdlib.h>
typedef struct node {
    int value;
    node* next;
} node;

node* HEAD = NULL;

bool addNode(node* node){
    //Add a node to the list
    if (node == NULL){
        return false;
        //invalid input
    }

    if (HEAD == NULL) {
        HEAD = node;
        return true;
        //list is empty
    }
    struct node* trav = HEAD;
    //create traversal node

    while (trav->next != NULL) {
        trav = trav -> next;
        //check if the next node is not null
    }
    trav -> next = node;
    return true;
}

node* findNode(int value){

    //Find a node in the list
    node* checker = HEAD;

    if (HEAD == NULL) {
        return NULL;
    }

    while (checker != NULL){
        if (checker -> value == value){
            return checker;
        }
        checker = checker->next;
    }
    return NULL;
}

bool deleteNode (node* node){
    //Delete a node in the list
    struct node* trav1 = NULL;
    struct node* trav2 = HEAD;

    if (HEAD == NULL){
        //empty list case
        return false;
    }

    if (findNode(node) == NULL){
        //node is not in list case
        return false;
    }

    while (trav2 != NULL) {

        if (trav2 == node){
            trav1 = trav2->next;
            free(trav2);
            trav2 = NULL;
            return true;
        }

    }
    return true;

}

void printList(void){
    node* checker = HEAD;

    while (checker != NULL){
        printf("%d ", checker->value);
        checker = checker->next;
    }
} //Print the values in the list
