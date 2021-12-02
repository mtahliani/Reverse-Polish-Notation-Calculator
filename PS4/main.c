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
int status = 0;

int main() {

    //test case 1
    printf("The result of test case 1 is: \n");
    double result1 = evaluate(expression1, &status);
    printf("%f\n", result1);

    printf("\n");

    //test case 2
    printf("The result of test case 2 is: \n");
    double result2 = evaluate(expression2, &status);
    printf("%f\n", result2);

    printf("\n");

    //test case 3
    printf("The result of test case 3 is: \n");
    double result3 = evaluate(expression3, &status);
    printf("%f\n", result3);
    printf("\n");

    //test case 4
    printf("The result of test case 4 is: \n");
    double result4 = evaluate(expression4, &status);
    printf("%f\n", result4);
    printf("\n");

    //test case 5
    printf("The result of test case 5 is: \n");
    double result5 = evaluate(expression5, &status);
    printf("%f\n", result5);
    printf("\n");

    //test case 6
    printf("The result of test case 6 is: \n");
    double result6 = evaluate(expression6, &status);
    printf("%f\n", result6);
    printf("\n");

    //test case 7
    printf("The result of test case 7 is: \n");
    double result7 = evaluate(expression7, &status);
    printf("%f\n", result7);
    
}



