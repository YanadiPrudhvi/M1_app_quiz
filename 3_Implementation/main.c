/**
 * @file main.c
 * @author Yanadi Prudhvi
 * @brief main function to run program
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include "functions.h"
void main()
{
    char* name[50];
    printf("please enter your name:");
    scanf("%50s",name);
    welcome();
    rules(name);
    question1(name);
    //end();
    return 0;
}
