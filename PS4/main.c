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

char expression1[] = {"24.2 12 / 3 / 17 + +"};
char expression2[] = {"+"};
char expression3[] = {"17 22 / 4 * 16 -"};
char expression4[] = {"2 8 ^ 3 /"};
char expression5[] = {"17 22 33 / 4 + 2"};
char expression6[] = {""};
char expression7[] = {"8 7 + 6 - 5 / 4 * 3 ^"};
char tester[] = {"1"};
int status = 0;
int* status_p = &status;

int main() {
    double result = evaluate(expression7, &status);
    printf("%f\n", result);

}



