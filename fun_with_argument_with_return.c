#include<stdio.h>
int sum(int, int); // fun declaration
void main()
{
	int a, b, result;
	printf("enter the number to get sum:\n");
	scanf("%d%d", &a,&b);
	result = sum(a, b); // fun call
	printf("sum of two number is: %d\n", result);
}
int sum(int a, int b) // fun defination
{
	return a+b; // fun returning a value
}
