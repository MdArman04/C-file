#include<stdio.h>
int main()
{
	char signal;
     printf("enter the traffic light signal(R/Y/G): ");
     scanf("%c", &signal);
     if(signal == 'R')
     {
     	printf("stop! Its a red signal.");
	}
	else if(signal == 'Y')
	{
		printf("Get ready to move. Its a yellow signal.");
	}
	else if (signal == 'G')
	{
		printf("Go! Its a green signal.");
	}
	else
	{
		printf("Invalid signal Input.");
	}
	return 0;
}
