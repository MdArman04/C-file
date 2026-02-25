#include<stdio.h>
void sum(int, int);
void main()
{
	int a, b;
	printf("enter the two numbers\n");
	scanf("%d%d", &a,&b);
	sum(a, b);
}
void sum(int a, int b)
{
	printf("sum is: %d\n", a+b);
}
