/**
 * @file functions.h
 * @author Yanadi Prudhvi
 * @brief functions declerations for executing the program code
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_
/**
 * @brief These two files used to show welcome messages and tell game rules
 * 
 */
void welcome();
void rules(char*);
/**
 * @brief These functio use to chose random number
 * 
 * @return int 
 */
int random_choice();
/**
 * @brief used to take response from participant
 * 
 * @return int 
 */
int chose();
/**
 * @brief each function contain set of questions,every time we execute it show fifferent question
 * 
 */
void question1();
void question2();
void question3();
void question4();
void question5();
void question6();
void question7();
void question8();
void question9();
void question10();
#endif