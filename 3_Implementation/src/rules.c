/**
 * @file rules.c
 * @author Yanadi Prudhvi
 * @brief rules to participate in quiz
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "functions.h"
#include<stdio.h>
void rules(char* name)
{
    printf("Hi %s, hope you doing Great!\n",name);
    printf("here are the rules to participate in kbc quiz\n");
    printf("              1.There are 10 questions in entire quiz\n");
    printf("              2.Each question have 4 options, you have to chose one option\n");
    printf("              3.If you chose correct answer, you can go to next question\n");
    printf("              4.If you chose wrong, you are eliminated\n");
    printf("              5.you have three safe levals at question 3, 5, 8\n");
    printf("ok %s, lets play\n",name);
}