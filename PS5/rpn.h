//
// Created by Milan Tahliani on 12/6/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef PS5_RPN_H
#define PS5_RPN_H

typedef struct node node;

int isOperator();

double evaluate (char* expression, int* status);

double recursivePower(double val1, double val2);

#endif //PS5_RPN_H
