//
// Created by Milan Tahliani on 11/8/21.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef PS4_ERRORS_H
#define PS4_ERRORS_H

#define NOPROBLEM 0
#define TOOMANYOPERANDS 1
#define INVALIDINPUT 2
#define TOOMANYOPERATORS 3
#define TOOLITTLEOPERANDS 4
#define DIVIDEBYZERO 5
#define DECIMALPOWER 6

void receiveErrorMessage(int errorCode);

#endif //PS4_ERRORS_H
