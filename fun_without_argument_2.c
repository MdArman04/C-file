#include<stdio.h>
void sum();
void main()
{
	printf("\n Going to calculate the sum of two number: ");
	sum();
}
void sum()
{
	int a, b;
	printf("enter the two number:\n");
	scanf("%d%d", &a,&b);
	printf("sum is : %d\n", a+b);
}
