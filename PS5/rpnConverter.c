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


// Definition of a node
typedef struct node {
    union {
        double value;
        char operator;
    } contents;
    int type;
    int precedence;
    double value;
    node *next;
} node;

// convertPostfix - Converts an expression from infix to postfix notation
char *convertPostfix(char *expression) {
    // Ensures stack is clear before converting
    clearStack();

    // Callocs initially empty output to return and checks if successful
    char *output = (char *) calloc(sizeof(expression) / sizeof(char), sizeof(char));
    if (!output) {
        printf("Memory allocation failed\n");
        return NULL;
    }

    // Creates an counter to keep track of array index and a counter
    // to track how many parenthesis there are for error checking
    int count = 0;
    int countParentheses = 0;

    // Returns first token
    char *token = strtok(expression, " ");

    // Keeps parsing remaining tokens
    while (token) {
        // Checks if token is an operand
        if (isNumber(token)) {
            // Appends operand using strcat and adds space after
            strcat(output, token);
            count += strlen(token);
            output[count++] = ' ';
        }

            // Checks if token is a left parenthesis
        else if (*token == '(') {
            // Pushes parenthesis and increments counter
            push(createNode(*token, operator));
            countParentheses++;
        }

            // Checks if scanned token is a right parenthesis and
            // appends it to output until a left parenthesis is found
        else if (*token == ')') {
            while (!isEmpty() && peek()->contents.operator != '(') {
                // Appends operator and adds space after
                output[count++] = pop()->contents.operator;
                output[count++] = ' ';
            }

            // Frees popped node and increments parentheses counter
            free(pop());
            countParentheses++;
        }

            // If an operator is encountered then take action based on
            // the precedence of the operator
        else if (isOperator(token) != -1) {
            while (!isEmpty() && assignRank(*token) <= peek()->precedence) {
                // Appends operator and adds space after
                output[count++] = pop()->contents.operator;
                output[count++] = ' ';
            }

            // Otherwise push operator to stack
            push(createNode(*token, operator));
        }

            // If the operator is invalid
        else {
            // Returns error expression to be turned
            // into error code during evaluate call
            return "INVALIDOPERATOR";
        }

        // Moves to next token
        token = strtok(NULL, " ");
    }

    // Check if there are mismatched parentheses
    if (countParentheses % 2 != 0) {
        // Returns error expression to be turned
        // into error code during evaluate call
        return "MSMPA";
    }

    // Pop all remaining operators from the stack and append
    while (!isEmpty()) {
        if (peek()->contents.operator == '(') {
            return "MSMPA";
        }

        // Appends operator and adds space after
        output[count++] = pop()->contents.operator;
        output[count++] = ' ';
    }

    // Returns expression
    return output;
}

// HELPER FUNCTIONS
// isNumber - Checks if token is a number using strtod
bool isNumber(char *token) {
    // Creates indicator for conversion and performs strtod operation
    char *err;
    strtod(token, &err);

    // If the conversion is not modified then the token is
    // not a valid number
    return token != err;
}
