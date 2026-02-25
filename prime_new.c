#include<stdio.h>
int main()
{
	int num, i, count = 0, j, prime = 1;
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
			if(prime<i)
			{
				prime = i;
			}
		}
	}
	printf("prime number below %d is %d\n", num, prime);
}
