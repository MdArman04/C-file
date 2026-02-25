#include<stdio.h>
int main()
{
	int i, x, y, sum = 0;
	printf("enter the number\n");
	scanf("%d%d", &x,&y);
	for(i = x; i<=y; i++)
	{
		if(i % 2 == 0)
		{
			sum = sum + i;
		}
	}
		printf("sum of integer: %d\n", sum);
}
