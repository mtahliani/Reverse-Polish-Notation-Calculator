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

    while (checker -> next != NULL){
        if (checker -> value == value){
            return checker;
        }
        checker = checker->next;
    }
    return checker;
}

bool deleteNode (node* node){
    //Delete a node in the list
    struct node* trav1 = HEAD;
    struct node* trav2 = HEAD->next;

    if (HEAD == NULL){
        return false;
    }

    if (node == HEAD){
        HEAD = HEAD->next;
        free(trav1);
        return true;
    }

    while (trav2->next != node) {
        trav1 = trav1->next;
        trav2 = trav2->next;

        if (trav2->next == node){
            trav2 = trav2->next;
            free(trav2);
            trav1 = trav1->next;

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
