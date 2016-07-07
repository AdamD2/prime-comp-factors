/*  Name: factor.h
 *  Contributors: Adam Douglas
 *  Date Created: 07-07-2016
 *  Purpose: To calculate factors
 */

// Header files to include
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Title formatting function
void printTitle(char *title);

// Functions to print a menu, get user input and call the function they chose
char menu(void);
int getNumber(void);
void callFunction(char choice, int num);

// Maths functions for finding factors
void findFactors(int num);
int findNumberOfFactors(int num);
void highlyCompositeNumbers(int num);
void findPrimes(int num);
