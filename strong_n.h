#include<stdio.h>
int GetFactorial(int number);
int main()
{#include<stdio.h>
int GetFactorial(int number);
int main()
{
	int num, i, x, temp1, sum = 0, temp2;
	printf("enter the number\n");
	scanf("%d", &num);
	for(i = 1; i<=num; i++)
	{
		sum = 0;
		temp1 = i;
		temp2 = i;
		while(temp1>0)
		{
			x = temp1 % 10;
			sum = sum + GetFactorial(x);
			temp1 /= 10;
		}
		if(sum == temp2)
		{
			printf("%d\n", sum);
		}
		
	}
}
int GetFactorial(int number)
{
	int factorial = 1, j;
	for(j = 1; j<=number; j++)
	{
		factorial = factorial * j;
	}
	return factorial;
}
	int num, i, x, temp1, sum = 0, temp2;
	printf("enter the number\n");
	scanf("%d", &num);
	for(i = 1; i<=num; i++)
	{
		sum = 0;
		temp1 = i;
		temp2 = i;
		while(temp1>0)
		{
			x = temp1 % 10;
			sum = sum + GetFactorial(x);
			temp1 /= 10;
		}
		if(sum == temp2)
		{
			printf("%d\n", sum);
		}
		
	}
}
int GetFactorial(int number)
{
	int factorial = 1, j;
	for(j = 1; j<=number; j++)
	{
		factorial = factorial * j;
	}
	return factorial;
}
