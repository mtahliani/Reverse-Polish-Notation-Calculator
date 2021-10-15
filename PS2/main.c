#include <stdio.h>
#include "ps2.h"
#include <stdbool.h>

int main() {
    //running large and small function
    const int array[] ={72,90,100,36,21,15,76,-6,63,41,99,27,3,66,19,16,27,47,0,23};
    int length = sizeof array / sizeof(int);
    int largest;
    int smallest;
    large_and_small(array, length, &largest, &smallest);
    printf("You entered an array of length: ");
    printf("%i\n", length);
    printf("The largest value in this array is: ");
    printf("%i\n", largest);
    printf("The smallest value in this array is: ");
    printf("%i\n", smallest);


    //running inner product function
    const double leftArray[] = {15.26, 28.20, 6.71, 72.22, 92.85, 15.50, 85.64, 57.41, 44.40, 72.91};
    const double right_array[] = {9.17, 4.8, 10.9, 10.12, 17.18, 3.9, 6.19, 5.4, 3.13, 6.1};
    int leftArrayLength = sizeof leftArray / sizeof(double);
    int rightArrayLength = sizeof right_array / sizeof(double);

    if (leftArrayLength != rightArrayLength){
        printf("Re-enter the arrays to be arrays of equal length");
    }
    double res = inner_product(leftArray, right_array, leftArrayLength);
    printf("You entered two arrays of length: ");
    printf("%i\n", rightArrayLength);
    printf("Inner product result: ");
    printf("%f\n", res);


    //running the same or not same function
    const int left[] = {72, 90,100,36,21,15,76,-6,63,41,99,27,3,66,19,16,27,47,0,23};
    const int right[] = {72, 90,100,36,21,15,76,-6,63,41,99,27,3,66,18,16,27,47,23};
    int left_length = sizeof left / sizeof(int);
    int right_length = sizeof right / sizeof(int);
    bool tester = compareArrays(left, left_length, right, right_length);

    if (tester == true) {
        printf("The arrays you input have length: ");
        printf("%i\n", right_length);
        printf("The arrays you input are identical.");
    }
    else if (tester == false && right_length != left_length){
        printf("You entered an array of length ");
        printf("%i", left_length);
        printf(", and an array of length ");
        printf("%i\n", right_length);
        printf("The arrays you entered are not identical because they are not the same length and/or do not contain the same values.");
    }
    else {
        printf("The arrays you entered are not identical because they do not contain the same values.");
    }
    return 0;
}
