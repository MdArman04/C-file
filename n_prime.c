#include<stdio.h>
int main()
{
	int num, i, j, count = 0; 
	num = 100;
	for(i = 10; i<=num; i++)
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
			printf("number is prime: %d\n", i);
		}
		else
	{
			printf("not a prime: %d\n", i);
		
		for(j = 1; j<=i; j++)
		{
			if(i % j == 0)
			{
				count ++;
			}
		}
			printf("%d\n", i);
	}
}

}
