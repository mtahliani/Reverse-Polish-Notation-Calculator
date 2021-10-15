//
// Created by Milan Tahliani on 10/13/21.
//

#include "ps2.h"
#include <stdbool.h>

void large_and_small(const int* array, int length, int* largest, int* smallest){
    *largest = *array;
    *smallest = *array;
    //initialize the smallest and the largest values to be first val in array

    for (int i = 0; i < length; i++) {

        if (*largest < *array) {
            *largest = *array;
            //if there is a larger value set largest to that
        }

        if (*smallest > *array){
            *smallest = *array;
            //if there is a smaller value set smallest to that

        }
        *array++;
        //increment comparable position
    }
}


double inner_product(const double* leftArray, const double* right_array, int length){
    double sumTotal = 0;
    //initialize variable to be returned as the sum total
    for (int i = 0; i < length; i++){
        sumTotal += (*leftArray++ * *right_array++);
        //compute and increment the product of the position
    }
    return sumTotal;

}

bool compareArrays(int* left, int left_length, int* right, int right_length){
    bool continueOn = true;

    if (right_length != left_length){
        return false;
    }
    else if (right_length == left_length) {
        for (int i = 0; i < left_length; i++){
            if (*left == *right) {
                *left++;
                *right++;
                continue;

            }
            else {
                continueOn = false;
                break;
            }

        }
        return continueOn;

    }

}
