/*  Name: factor.c
 *  Contributors: Adam Douglas
 *  Date Created: 07-07-2016
 *  Purpose: To calculate factors
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printTitle(char *title);

int main(int argc, char *argv[]){
    printTitle("Welcome to prime and composite factors.");

    return EXIT_SUCCESS;
}

void printTitle(char *title){
    printf("%s\n", title);
    for(int i = 0; i < strlen(title); i++)
        printf("-");
    printf("\n\n");
}
