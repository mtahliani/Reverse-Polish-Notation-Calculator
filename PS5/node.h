//
// Created by Milan Tahliani on 12/6/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"
#include "errors.h"
#include "rpn.h"

#ifndef PS5_NODE_H
#define PS5_NODE_H

typedef struct node node;

enum type {operator, number};

node* createNode(double value, int type);

int assignRank(char);

#endif //PS5_NODE_H
