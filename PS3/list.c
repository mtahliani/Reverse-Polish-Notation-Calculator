//
// Created by Milan Tahliani on 10/25/21.
//

#include "list.h"
#include "node.h"
#include <stdbool.h>
#include <stdlib.h>
typedef struct node {
    int value;
    struct node* next;
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

    checker = NULL;
    return NULL;
}

bool deleteNode (node* node){
    //Delete a node in the list
    struct node* cur = HEAD;
    struct node* prev = HEAD;

    if (HEAD == NULL){
        //empty list case
        return false;
    }

    if (HEAD == node) {
        //case for when the HEAD is to be deleted
        HEAD = cur->next;
        free(cur);
        cur = NULL;
        prev = NULL;
        return true;
    }

    cur = cur ->next;
    //set up traversal by putting cur in front of previous
    while (cur) {

        if (cur == node){
            prev->next = cur->next;
            free(cur);
            cur = NULL;
            prev = NULL;
            return true;
        }
        else {
            cur = cur->next;
            prev = prev->next;
        }

    }

    cur = NULL;
    prev = NULL;
    //case for when it is not in

    return false;

}

void printList(void){
    node* checker = HEAD;

    while (checker != NULL){
        printf("%d ", checker->value);
        checker = checker->next;
    }
} //Print the values in the list

int findLargest(void) {
    //helper function for deleteLargest
    node* cur = HEAD;
    int largest = HEAD->value;
    while (cur){
        if (cur->value > largest){
            largest = cur->value;
        }
        cur = cur->next;
    }
    cur = NULL;
    return largest;
}

void deleteLargest(void) {
    //delete all occurrences of the largest value
    int large = findLargest();
    while (findNode(large)) {
        deleteNode(findNode(large));
    }
}

int countNodes(void) {
    int counter = 0;
    node* cur = HEAD;
    while (cur) {
        counter++;
        cur = cur->next;
    }
    cur = NULL;
    return counter;
}

void bubbleSort(void){
    int swappy;
    do {
        swappy = 0;

        node*prev = NULL;
        node*cur = HEAD;

        while (cur -> next!= NULL){
            if (cur->value > cur->next->value){
                node*temp = cur->next;
                swap(prev, cur, cur->next);
                swappy = 1;
                prev = temp;
            }
            else {
                prev = cur;
                cur = cur->next;
            }
        }
        prev = NULL;
        cur = NULL;

    } while (swappy);
}

void swap(node* node1Prev, node* node1, node* node2) {

    if (node1Prev == NULL && node1 == HEAD){
        HEAD = node2;
    }
    else {
        node1Prev -> next = node2;
    }
    node1 -> next = node2 -> next;
    node2 -> next = node1;

    }




