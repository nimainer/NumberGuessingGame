#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    system("cls");
    srand(time(0));
    int randomNum = (rand() % 100) + 1;
    int guess;
    printf("\n\n");

    do{
        printf("guess (1-100):");
        scanf("%d", &guess);
        if(guess == randomNum){
            printf("Correct!");
            system("exit");
            break;
        }else if (guess < 1 || guess > 100 ){
            system("cls");
            printf("\n\nyour guess can only be between 0 and 101\n");
            continue;
        }else if (guess < randomNum){
            system("cls");
            printf("\n\nToo low!\nTry again\n");
            continue;
        }else if (guess > randomNum){
            system("cls");
            printf("\n\nToo high\nTry again\n");
            continue;
        }else{
            system("cls");
            printf("\n\nError, stopping program... .. .");
            system("exit");
            break;
        }
    }while (!(guess == randomNum)); 



    return 0;
}