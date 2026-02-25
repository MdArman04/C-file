#include<stdio.h>
int main()
{
	int num, i, j, count = 0;
	printf("enter the number\n");
	scanf("%d", &num);
	for(i = 1; i<=num; i++)
	{
		count = 0;
		for(j = 1; j<=i; j++)
		{
			if(i % j == 0)
			{
				count ++;
			}
		}
		if(count == 2)
		{
			printf("prime: %d\n", i);
		}
	}
}
