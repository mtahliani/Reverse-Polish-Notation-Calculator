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
#include "rpn.h"
#include <string.h>

double evaluate (char* expression, int* status){
    return 0;
}

float add(float val1, float val2) {
    float sum = val1 + val2;

    return sum;
}

float multiply(float val1, float val2) {
    float product = val1 * val2;

    return product;
}

float subtract(float val1, float val2) {
    float difference = val1 - val2;

    return difference;
}

float divide(float val1, float val2) {

    float quotient = val1 / val2;


    if (val2 == 0) {
        quotient = 0;
    }

    return quotient;

}
