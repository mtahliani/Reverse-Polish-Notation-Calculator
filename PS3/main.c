#include <stdio.h>
#include "node.h"
#include "list.h"

typedef struct node {
    int value;
    struct node* next;
} node;
int main() {

    //tests for addNode and createNode
    node* test11 = createNode(210111);
    printf("%d\n",test11->value);

    int tester[] = {89, 39, 18, 96, 71, 25, 2, 55, 60, -8, 9, 42, 69, 96, 24};
    int testerLength = sizeof (tester) / sizeof (int);
    for (int iterator = 0; iterator < testerLength; iterator++) {
        node* addedNode = createNode(tester[iterator]);
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
    printf("The list and number of nodes remaining in the list after running deleteLargest: \n");
    deleteLargest();
    printList();
    printf("\n");
    int count2 = countNodes();
    printf("%d", count2);
    printf("\n");
    printf("\n");




    //test for sorting
    printf("The list after running bubbleSort: \n");
    bubbleSort();
    printList();




    return 0;
}
