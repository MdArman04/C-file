#include<stdio.h>
int main()
{
	int i, num, fact = 1;
	printf("enter the number\n");
	scanf("%d", &num);
	for(i = 1; i<=num; i++)
	{
		fact = fact * i;
	}
	printf("factorial is: %d\n", fact);
}
