#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "node.h"
#include "stack.h"
#include "errors.h"
#include "rpn.h"
#include "rpnConverter.h"
#include <string.h>

typedef struct node {
    union{
        double value;
        char operator;
    } contents;
    int type;
    int precedence;
    node *next;
    double value;
} node;

int main(int argc, char *argv[]) {
    // PS5.0 Evaluate Expressions
    // Global variables
    int status = 0;     // Status code for error checking
    char dataLine[100];     // Stores input strings from infile

    // Checks if there are any missing CLI arguments before reading files
    if (argc < 3) {
        printf("Missing CLI Argument(s)\n");
        return -1;
    }

    // Reads and writes data from infile and outfile
    FILE *input = fopen(argv[1], "r");
    FILE *data = fopen(argv[2], "w");

    // Checks if I/O paths are correct and/or exist
    if (!input) {
        perror("I/O error: ");
        return -1;
    }

    // Parses through file line by line until it reaches the end
    while (fgets(dataLine, 100, input)) {
        // Removes the trailing line and prints the infix notation
        // read in by the infile to the outfile
        dataLine[strcspn(dataLine, "\n")] = 0;
        fprintf(data, "INFIX: %s\n", dataLine);

        // Converts expression from infix to postfix notation
        char *expression = convertPostfix(dataLine);

        // Prints postfix notation to the outfile
        fprintf(data, "POSTFIX: %s\n", expression);

        // Evaluates the postfix expression and prints
        // the result to the outfile
        double result = evaluate(expression, &status);
        fprintf(data, "RESULT: %0.2f\n", result);

        // For formatting purposes prints char on new line
        fprintf(data, "\n");
    }

    // Closes input and data files since
    // they are no longer in use
    fclose(input);
    fclose(data);

    return 0;
}