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

    int status = 0;     // Status code for error checking
    char dataLine[100];     // Stores input strings from infile


    // Checks for missing CLI files
    if (argc < 3) {
        printf("Missing CLI Argument(s)\n");
        return -1;
    }

    // Reads and writes data from infile and outfile
    FILE *input = fopen(argv[1], "r");
    FILE *data = fopen(argv[2], "w");

    // Checks for I/O paths
    if (!input) {
        perror("I/O error: ");
        return -1;
    }

    // Parses through file line by line until it reaches the end
    while (fgets(dataLine, 100, input)) {


        //if (dataLine [strlen(dataLine) - 1] == "\n"){
            //dataLine[strlen(dataLine) - 1] = "\0";
        //}

        dataLine[strcspn(dataLine, "\n")] = 0;
        fprintf(data, "INFIX: %s", dataLine);
        fprintf(data, "\n");

        char* expression = convertPostfix(dataLine);

        fprintf(data, "POSTFIX: %s\n", expression);

        double result = evaluate(expression, &status);
        fprintf(data, "RESULT: %f\n", result); //put in result of evaluations
        fprintf(data, "\n");
    }

    fclose(input);
    fclose(data);

    return 0;
}



