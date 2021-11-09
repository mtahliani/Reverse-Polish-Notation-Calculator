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

int main() {
    push(createNode(54.43, 1));
    push(createNode(45.45, 1));
    printList();
    clearStack();
    printList();

    return 0;
}
