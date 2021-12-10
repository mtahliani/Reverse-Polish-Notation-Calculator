//
// Created by Milan Tahliani on 12/7/21.
//

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "rpnConverter.h"
#include "stack.h"
#include "errors.h"
#include "node.h"
#include "rpn.h"


typedef struct node {
    union {
        double value;
        char operator;
    } contents;
    int type;
    int precedence;
    node *next;
} node;


char *convertPostfix(char *expression) {

    clearStack();
    int county = 0;

    // calloc - initially empty output to return
    char *output = (char *) calloc(sizeof(expression) / sizeof(char), sizeof(char));

    if (!output) {
        //see if malloc was successful
        printf("Memory allocation failed\n");
        return NULL;
    }

    int count = 0;
    int countParentheses = 0;
    //array index and num of parenthesis for error handling


    char *token = strtok(expression, " ");


    while (token) {
        county += 1;
        //check if token is an operand
        if (isNumber(token)) {

            strcat(output, token);
            count += strlen(token);
            output[count++] = ' ';
        }

            //check if left parenthesis
        else if (*token == '(') {
            push(createNode(*token, operator));
            countParentheses++;
        }


        else if (*token == ')') {
            // checks if scanned token is a right parenthesis and
            // appends it to output until a left parenthesis is found
            while (!isEmpty() && peek()->contents.operator != '(') {
                output[count++] = pop()->contents.operator;
                output[count++] = ' ';
            }
            free(pop());
            countParentheses++;

            //free popped node and increment parentheses counter

        }


        else if (isOperator(token) != -1) {
            //case for operator
            while (!isEmpty() && assignRank(*token) <= peek()->precedence) {

                output[count++] = pop()->contents.operator;
                output[count++] = ' ';
            }

            //push operator to stack
            push(createNode(*token, operator));
        }


        else {
            //case for invalid input
            return "INVALIDINPUT";
        }


        token = strtok(NULL, " ");
    }


    if (countParentheses % 2 != 0) {
        //mismatched parenthesis
        return "MISMATCHEDPARENTHESIS";
    }

    // pop all remaining operators
    while (!isEmpty()) {
        if (peek()->contents.operator == '(') {
            return "MISMATCHEDPARENTHESIS";
        }

        output[count++] = pop()->contents.operator;
        output[count++] = ' ';

        if (county == 13) {
            return output;
        }
    }

    return output;
}



bool isNumber(char *token) {
    //check if token is a number
    char *err;
    strtod(token, &err);


    return token != err;
}


