//
// Created by Milan Tahliani on 11/8/21.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef PS4_RPN_H
#define PS4_RPN_H

typedef struct node node;

double evaluate (char* expression, int* status);

float add(float val1, float val2);

float multiply(float val1, float val2);

float subtract(float val1, float val2);

float divide(float val1, float val2);

float recursivePower(float val1, float val2);

#endif //PS4_RPN_H
