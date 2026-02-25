#include<stdio.h>
int fact(int);
int main()
{
	int n, f;
	printf("enter the number to get factorial\n");
	scanf("%d", &n);
	f = fact(n);
	printf("factorial is : %d\n", f);
}
int fact(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if (n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}


