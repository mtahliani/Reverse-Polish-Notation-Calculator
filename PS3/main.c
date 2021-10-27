#include <stdio.h>
#include <stdbool.h>
#include "node.h"
#include "list.h"
#include <stdlib.h>

typedef struct node {
    int value;
    node* next;
} node;

int main() {
    //Testing the functions
    int tester[] = {89, 39, 18, 96, 71, 25, 2, 55, 60, -8, 9, 42, 69, 96, 24};
    int testerLength = sizeof (tester) / sizeof (int);
    for (int i = 0; i < testerLength; i++) {
        node* addedNode = createNode(tester[i]);
        addNode(addedNode);
    }

    //node* testerNode = createNode(25);
    //addNode(testerNode);
    deleteNode(findNode(60));
    printList();

    return 0;
}
