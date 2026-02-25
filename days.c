#include<stdio.h>
int main()
{
	int day;
	printf("enter a day number(1-7): ");
	scanf("%d", &day);
	if(day>= 1)
	{
		if(day == 1)
		{
			printf("Its Monday!");
		}
		else if(day == 2)
		{
			printf("Its a Wednesday!");
		}
		else if(day == 3)
		{
			printf("Its a Friday!");
		}
		else if(day == 4)
		{
			printf("Its Sunday!");
		}
		else
		{
			printf("Invalide day!");
		}
	}
	else 
	{
		printf("Invalide day!");
	}
	return 0;	
}

