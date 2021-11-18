//
// Created by Milan Tahliani on 11/8/21.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "node.h"
#include "stack.h"
#include "errors.h"
#include "rpn.h"
#include <string.h>

typedef struct node {
    double value;
    int type;
    struct node *next;
} node;

double evaluate (char* expression, int* status){
    clearStack();
    char**numCheckerReference; //to be checked as number
    char* token = strtok(expression, " ");
    while (token != NULL) {

        if (isOperator(token) == -1){
            //the token is not an operator

            //check if it is a number
            double numChecker = strtod(token, &status);

            if (isOperator(numChecker) == -1) {
                push(createNode(numChecker, number));
            }
            else {
                //case for invalid input
                *status = INVALIDINPUT;
                clearStack();
                receiveErrorMessage(*status);
            }
        }

        else {
            //token here is an operator
            //empty stack case - throw the error
            if (isEmpty()) {
                *status = EMPTYSTACK;
                clearStack();
                receiveErrorMessage(*status);
            }

            else {
                //otherwise begin to retrieve the values
                node *first = pop();
                float numFirst = first->value;


                node *second = pop();
                float numSecond = second->value;


                // check whether stack is empty already
                if (first == NULL) {
                    //case for when there is only one operand in the stack
                    *status = TOOLITTLEOPERANDS;
                    clearStack();
                    receiveErrorMessage(*status);
                    return 0.0;
                }
                if (numSecond == 0.0 && token == "/") {
                    //case for divide by zero
                    *status = DIVIDEBYZERO;
                    //clearStack();
                    printf("Divide by zero error");
                    return 0.0;
                }

                switch (isOperator(token)) {

                    case 0:
                        push(createNode(numFirst + numSecond, number));
                        token = NULL;
                        break;
                    case 1:
                        push(createNode(numSecond - numFirst, number));
                        break;
                    case 2:
                        push(createNode(numFirst * numSecond, number));
                        break;
                    case 3:
                        push(createNode(numSecond / numFirst, number));
                        break;
                    case 4:
                        push(createNode(recursivePower(numSecond, numFirst), number));
                        break;
                    default:
                        exit(EXIT_FAILURE);
                        break;

                }
            }
        }
        token = strtok(NULL, " ");


    }
    }


int isOperator(char* token) {

    switch (*token){
        case '+':
            return 0;
            break;
        case '-':
            return 1;
            break;
        case '*':
            return 2;
            break;
        case'/':
            return 3;
            break;
        case'^':
            return 4;
            break;
        default:
            return -1;
            break;
    }

}

double recursivePower (double val1, double val2){
        double res = 1;
        double base = val1;
        double exp = val2;
        if (val2 == 0) {
            return res;
        }

        if (val2 == 1) {
            return val1;
        }

        if (val2 < 0) {
            return -1;
        }

        if (val2 > 1) {
            return (val1 * recursivePower(base, exp - res));
        }

        return res;

}
