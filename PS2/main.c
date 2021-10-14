#include <stdio.h>
#include "ps2.h"

int main() {
    //running large and small function
    const int test[] ={72,90,100,36,21,15,76,-6,63,41,99,27,3,66,19,16,27,47,0,23};
    int arrayLength = sizeof test / sizeof(int);
    int largest;
    int smallest;
    large_and_small(test, arrayLength, &largest, &smallest);
    printf("%i\n", largest);
    printf("%i\n", smallest);

    //running inner product function
    const double left[] = {15.26, 28.20, 6.71, 72.22, 92.85, 15.50, 85.64, 57.41, 44.40, 72.91};
    const double right[] = {9.17, 4.8, 10.9, 10.12, 17.18, 3.9, 6.19, 5.4, 3.13, 6.1};
    int leftArrayLength = sizeof left / sizeof(double);
    int rightArrayLength = sizeof right / sizeof(double);

    if (leftArrayLength != rightArrayLength){
        printf("Re-enter the arrays to be arrays of equal length");
    }
    double res = inner_product(left, right, leftArrayLength);
    printf("%f", res);

    //running the same or not same function






    return 0;
}
