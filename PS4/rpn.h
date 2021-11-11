//
// Created by Milan Tahliani on 11/8/21.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef PS4_RPN_H
#define PS4_RPN_H

typedef struct node node;

int isOperator();

double evaluate (char* expression, int* status);

double recursivePower(double val1, double val2);

#endif //PS4_RPN_H
