/**
 * @file random_choice.c
 * @author Yanadi Prudhvi
 * @brief chosing random number from question set
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

int random_choice()
{
    int lower = 1, upper = 5;
    int num;
    srand(time(0));
    num = (rand() % (upper - lower + 1)) + lower;
    return num;
}
