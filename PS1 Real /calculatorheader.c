//
// Created by Milan Tahliani on 9/28/21.
//

#include <stdio.h>
#include "calculatorheader.h"

float addition(float val1, float val2){
    float sum = val1 + val2;

    return sum;
}

float multiplication(float val1, float val2){
    float product = val1 * val2;

    return product;
}

float subtraction(float val1, float val2){
    float difference = val1 - val2;

    return difference;
}

float division(float val1, float val2){

    float quotient = val1 / val2;


    if (val2 == 0) {
        quotient = 0;
    }

    return quotient;

}

float power(float val1, float val2){
    float temp, ans;
    float res = 1.0;
    if (val2 < 0){
        return -1;
    }
    if (val2 == 0){
        return 1;
    }
    if (val2 == 1){
        return val1;
    }
    while (val2 > 0){
        res *= val1;
        val2--;
    }
    return res;


}

float recursivePower(float val1, float val2){

        float res = 1;
        float base = val1;
        float exp = val2;
        if (val2 == 0){
            return res;
        }

        if (val2 == 1){
            return val1;
        }

        if (val2 < 0) {
            return -1;
        }

        if (val2 > 1) {
            return (val1 * recursivePower(base, exp-res));
        }

        return res;

}

