#include<stdio.h>
int fibonacci(int);
void main()
{
	int n, f;
	printf("enter te number\n");
	scanf("%d", &n);
	f = fibonacci(n);
	printf("fiboancci is: %d\n", f);
}
int fibonacii(int n)
{
	if(n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
