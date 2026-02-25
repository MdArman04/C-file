#include<stdio.h>
int sum();
void main()
{
	int result;
	printf("\nGoing to add two number:");
	result = sum();
	printf("%d\n", result);
}
int sum()
{
	int a, b;
	printf("enter the two number: ");
	scanf("%d%d", &a,&b);
	return a+b;
}

