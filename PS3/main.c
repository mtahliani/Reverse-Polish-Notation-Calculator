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

    //tests for addNode and createNode
    int tester[] = {89, 39, 18, 96, 71, 25, 2, 55, 60, -8, 9, 42, 69, 96, 24};
    int testerLength = sizeof (tester) / sizeof (int);
    for (int i = 0; i < testerLength; i++) {
        node* addedNode = createNode(tester[i]);
        addNode(addedNode);
    }

    //create the list and test addNode and createNode
    printf("This is the list after running addNode and createNode: \n");
    printList();
    printf("\n");
    printf("\n");

    //test for countNodes
    int count = countNodes();
    printf("Number of nodes in the list using countNodes: \n");
    printf("%d", count);
    printf("\n");
    printf("\n");


    //test for deleteLargest
    printf("The list after running deleteLargest: \n");
    deleteLargest();
    printList();
    printf("\n");
    printf("\n");



    //test for sorting
    printf("The list after running bubbleSort algorithm: \n");
    bubbleSort();
    printList();




    return 0;
}
