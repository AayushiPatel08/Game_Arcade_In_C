#include <stdio.h>
#include <time.h>

#include "Tictakto.c"
#include "snake.c"
#include "quiz_Final.c"
#include "card.c"

int main(){
	    int opt;

    while(opt != 0){

        printf("VIT\t\t\t\t Welcome to Vit game arcade \n");
		printf("Pune\t\t\t\t Choose the game you wanna play :) \n\n\n");
        printf(" \t\t\t\t 1. Quiz Game \n "
               "\t\t\t\t 2. Snake Game  \n "
               "\t\t\t\t 3. TicTacTo Game \n "
               "\t\t\t\t 4. Card Game  \n "
               "\t\t\t\t 0. Exit \n");
        scanf("%d", &opt);

        switch (opt)
        {
            case 1:
				quiz();
            case 2:
                snake();
            case 3:
                TicTac();
            case 4:
                greekcard();
            case 0:
                printf("Thank you  We hope to see you again :) \n");
                exit(0);
            default:
                printf("[!!] Invalid Input, Try Again \n");
                break;
        }
    }
}


