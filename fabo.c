#include<stdio.h>
int main()
{
	int a = 0, b = 1, c, count, num;
	printf("enter the number\n");
	scanf("%d", &num);
	printf("THE SERIES IS\n");
	printf("%d\n%d\n", a, b);
	count = 2;
	while(num>count)
	{
		c = a+b;
		a = b;
		b = c;
		printf("%d\n", c);
		count ++;
	}
}
