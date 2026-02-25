#include<stdio.h>
int main()
{
	int i, num, count = 0; 
	printf("enter the number\n");
	scanf("%d", &num);
	for(i = 1; i<=num; i++)
	{
		if(num % i == 0)
		{
			count ++;
		}
	}
		if(count == 2)
		{
			printf("num is prime: %d\n", num);
		}
		else
		{
			printf("not a prime number: %d\n", num);
			for(i = 1; i<=num; i++)
	     {
		  if(num % i == 0)
		 {
			printf("%d\n", i);
		 }
		
	     }
		
	}
  } 
