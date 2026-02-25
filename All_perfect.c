#include<stdio.h>
int main()
{
	int i, j, num, sum;
	printf("enter the number\n");
	scanf("%d", &num);
	printf("The perfect numbers between 1 and %d", num);
	for(i = 1; i <= num; i++)
	{
		sum = 0;
		for(j = 1; j<i; j++)
		{
			if(i % j == 0)
			{
				sum = sum + j;
			}
		}
		if(sum == i)
		{
			printf("%d\n", i);
		}
	}
}
