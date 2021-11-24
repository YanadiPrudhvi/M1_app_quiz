/**
 * @file chose.c
 * @author Yanadi Prudhvi
 * @brief function used to take users response
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "functions.h"
#include<stdio.h>
int chose()
{
    int response;
    int data;
    printf("Enter your choice:");
    scanf("%d",&response);
    data=response;
    return data;
}