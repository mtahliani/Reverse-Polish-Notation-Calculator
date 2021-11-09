//
// Created by Milan Tahliani on 11/8/21.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"
#include "errors.h"
#include "rpn.h"

#ifndef PS4_NODE_H
#define PS4_NODE_H

typedef struct node node;

node* createNode(double value, int type);

#endif //PS4_NODE_H
