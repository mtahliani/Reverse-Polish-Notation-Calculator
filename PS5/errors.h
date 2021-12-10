//
// Created by Milan Tahliani on 12/6/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef PS5_ERRORS_H
#define PS5_ERRORS_H

#define NOPROBLEM 0
#define TOOMANYOPERANDS 1
#define INVALIDINPUT 2
#define TOOMANYOPERATORS 3
#define TOOLITTLEOPERANDS 4
#define DIVIDEBYZERO 5
#define DECIMALPOWER 6
#define MISMATCHEDPARENTHESIS 7

void receiveErrorMessage(int errorCode);

#endif //PS5_ERRORS_H