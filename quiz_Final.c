#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <dos.h>
#define max 10
#define CLOCKS_PER_SEC 1000
#include <time.h>
#include <windows.h>

char *stackQ[max][256];
int stackAns[max];
int top = -1;

void pushAns(int a)
{
	top = top + 1;
	stackAns[top] = a;
}

void delay(int milliseconds)
{
	long pause;
	clock_t now, then;

	pause = milliseconds * (CLOCKS_PER_SEC / 1000);
	now = then = clock();
	while ((now - then) < pause)
		now = clock();
}

int quiz()
{
	system("Color 0B");
	printf("\n\nA quizeria using STACK as the data structure\n");

	int points = 0, i, ans;
	char name[25];

	char stackQ[max][256] = {"Final Question!!\nAzoth is the alchemical name for which element?\n1)Silver\t2)Antimony\t3)Gold\t4)Mercury", "9th Question!!\n Which continent has the most countries?\n1)South America\t2)Asia\t3)Africa\t4)Europe", "8th Question!!\n What colour is the black box on a commercial airliner?\n1)Black\t2)Orange\t3)Grey\t4)Black box is not present in a commercial airline", "7th Question!!\nHow many dots are there in total on a pair of dice?\n1)22\t2)42\t3)21\t4)43", "6th Question!!\nIn a game of chess, what is the only piece able to jump over other pieces?\n1)Queen\t2)Elephant\t3)Knight\t4)Horse", "5th Question!!\n Which is NOT one of the six categories of Nobel Prizes?\n1)Physics\t2)Mathematics\t3)Chemistry\t4)Literature", "4rth Question!!Who invented the light bulb?\n1)Nikola Tesla \t2)Thomas Edison \t3)Alexander Graham Bell \t4)Benjamin Franklin","3rd Question!!\nWhat is the capital city of England?\n1)Bristol\t2)London\t3)Liverpool\t4)Manchester", "2nd Question!!\nHow many rings are there in an Olympic logo?\n1)5\t2)6\t3)4\t4)7", "1st Question!!\n1^2= ?\n1)0\t2)1\t3)11\t4)2"};
	pushAns(4); // push 10 ans.
	pushAns(3);
	pushAns(2);
	pushAns(3);
	pushAns(3);
	pushAns(2);
	pushAns(2);
	pushAns(2);
	pushAns(1);
	pushAns(2);

	printf("\nWelcome to Quizeria.\n");
	printf("Enter your name.  \n");
	scanf("%s", &name);
	printf("Welcome %s\n", name);

	for (i = 9; i >= 0; i--)
	{
		printf("\n\nThis question is for %d points\n", (10 - i) * 10);
		delay(100);
		printf("%s\n", stackQ[i]);
		delay(100);
		printf("Enter your ans.\n");
		scanf("%d", &ans);
		delay(100);
		if (ans == stackAns[i])
		{
			points = points + (10 - i) * 10;
			printf("Congrats!!!\t You earn %d points\n", (10 - i) * 10);
		}

		else if (ans == 0)
		{
			printf("You chose to quit\n");
			break;
		}

		else
		{
			points = points - 50;
			printf("Sorry, the correct answer is %d. \n", stackAns[i]);
			break;
		}
	}
	if (points == 550)
	{
		printf("You are the winner of the quizeria with %d points!!!\n", points);
	}
	else
	{
		printf("You scored %d points!!!\n", points);
	}

	getch();
}
