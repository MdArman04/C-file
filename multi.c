#include<stdio.h>
int main()
{
	int a, b, i, multi = 0;
	printf("enter the number\n");
	scanf("%d%d", &a, &b);
	if(b<0)
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}
	if(a>= 0)
	{
		for(i = 1; i<=a; i++)
		multi += b;
	}
	if(a<0)
	{
		for(i = a; i<=-1; i++)
		multi = -b;
	}
	printf("multiplication: %d\n", multi);
}
