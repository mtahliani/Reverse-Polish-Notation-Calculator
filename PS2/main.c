#include <stdio.h>
#include "ps2.h"

int main() {
    int test[] ={72,90,100,36,21,15,76,-6,63,41,99,27,3,66,19,16,27,47,0,23};
    int length = sizeof test / sizeof *test;
    int *largest, smallest;
    printf(test, length, largest, smallest);
    printf("test for commit again");
    return 0;
}
