//
// Created by Milan Tahliani on 11/15/21.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "node.h"
#include "stack.h"
#include "errors.h"
#include "rpn.h"

char* errorMessages[] = {
    "NOPROBLEM: calculation success.",
    "ERROR: too many operands. the stack is not left with only one operand.",
    "ERROR: invalid input. the calculator only accepts numbers and operators.",
    "ERROR: too many operators. the stack is not left with only one operand.",
    "ERROR: too little operands. the stack is not left with only one operand.",
    "ERROR: divide by zero. you cannot divide a value by zero.",
    "ERROR: empty stack. the stack is empty and is not left with only one operand."
};
void receiveErrorMessage(int errorCode) {
    printf("%s\n", errorMessages[errorCode]);
}
