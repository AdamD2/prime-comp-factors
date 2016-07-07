/*  Name: factor.c
 *  Contributors: Adam Douglas
 *  Date Created: 07-07-2016
 *  Purpose: To calculate factors
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printTitle(char *title);
char menu(void);
char getNumber(void);
void callFunction(char choice);

int main(int argc, char *argv[]){
    printTitle("Welcome to prime and composite factors.");
    
    char menuChoice = menu();
    int number = getNumber();
    callFunction(menuChoice);

    return EXIT_SUCCESS;
}

void printTitle(char *title){
    printf("%s\n", title);
    for(int i = 0; i < strlen(title); i++)
        printf("-");
    printf("\n\n");
}

char menu(void){
    char choice;

    printTitle("Main Menu.");
    printf("1 - Find the factors of a number.\n");
    printf("2 - Find the product of prime factors of a number.\n");
    printf("3 - Find the number of factors of a number.\n");
    printf("4 - Print the highly composite numbers lower than a number.\n");
    printf("5 - Print out the prime numbers lower than a number.\n\n");
    
    do{
        scanf("%c", &choice);
    }while(choice < '1' || choice > '5');

    return choice;
}

char getNumber(void){
    int num;

    do{
        printf("\nWhat number would you like to use? ");
        scanf("%d", &num);
    }while(num < 1);

   return num;
}

void callFunction(char choice){
    switch(choice){
        case '1':
            break;
        case '2':
            break;
        case '3':
            break;
        case '4':
            break;
        case '5':
            break;
    }
}
