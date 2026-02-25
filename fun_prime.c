#include<stdio.h>
int PrimeorNot(int);
int main()
{
	int n, prime;
	printf("enter the num to check for prime: ");
	scanf("%d", &n);
	prime = PrimeorNot(n);
	if(prime==1)
	{
		printf("entered num is prime: %d\n", n);
	}
	else
	{
		printf("entered num is not a prime: %d\n", n);
	}
}
int PrimeorNot(int n)
{
	int i = 2;
	while(i<=n/2)
	{
		if(n % i == 0)
		{
			return 0;
		}
		else
		i++;
	}
	return 1;
 } 
