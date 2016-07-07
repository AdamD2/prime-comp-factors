/*  Name: factor.c
 *  Contributors: Adam Douglas
 *  Date Created: 07-07-2016
 *  Purpose: To calculate factors
 */

#include "factor.h"

int main(int argc, char *argv[]){
    printTitle("Welcome to prime and composite factors.");
    
    char menuChoice = menu();
    int number = getNumber();
    callFunction(menuChoice, number);

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

int getNumber(void){
    int num;

    do{
        printf("\nWhat number would you like to use? ");
        scanf("%d", &num);
    }while(num < 1 || num > 2147483646);

    return num;
}

void callFunction(char choice, int num){
    int factorCount;

    switch(choice){
        case '1': findFactors(num);
            break;
        case '2':
            break;
        case '3': factorCount = findNumberOfFactors(num);
                  printf("The number has %d factors.\n", factorCount);
            break;
        case '4': highlyCompositeNumbers(num);
            break;
        case '5': findPrimes(num);
            break;
    }
}

void findFactors(int num){
    printf("The factors are: \n");
    int lineCounter = 0;

    for(int i = 1; i < num; i++){
        if(num % i == 0 && lineCounter < 5){
            printf("%d, ", i);
            lineCounter++;
        }else if(num % i == 0){
            printf("\n%d, ", i);
            lineCounter = 0;
        }
    }
    
    printf("%d.\n\n", num);
}

int findNumberOfFactors(int num){
    int factorCount = 0;

    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            factorCount++;
        }
    }

    return factorCount;
}

void highlyCompositeNumbers(int num){
    int maxFactors = 0;
    int tempFactors = 0;
    int lineCounter = 0;

    printf("The highly composite numbers are: \n");

    for(int i = 1; i <= num; i++){
        tempFactors = findNumberOfFactors(i);

        if(tempFactors > maxFactors && lineCounter < 5){
            printf("%d, ", i);
            maxFactors = tempFactors;
            lineCounter++;
        }else if(tempFactors > maxFactors){
            printf("\n%d, ", i);
            maxFactors = tempFactors;
            lineCounter = 0;
        }
    }

    printf("\n\n");
}

void findPrimes(int num){
    int prime = 0;
    int lineCounter = 0;
    printf("The prime numbers are: \n");

    for(int test = 1; test <= num; test++){
        prime = 1;
        for(int factor = 2; factor < test; factor++){
            if(test % factor == 0){
                prime = 0;
            }
        }
        
        if(prime && lineCounter < 5){
            printf("%d, ", test);
            lineCounter++;
        }else if(prime){
            printf("\n%d, ", test);
            lineCounter = 0;
        }
    }

    printf("\n\n");
}
