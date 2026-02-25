#include<stdio.h>
// user-defined function to check prime number
int checkPrime(int n)
{
	int j, flag = 1;
	for(j = 2; j<=n/2; ++j)
	{
		if(n % j == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
int main()
{
	int n1, n2, i, flag;
	printf("enter two num to get prime btwn them: \n");
	scanf("%d %d", &n1,&n2);
	// swap n1 and n2 if n1 > n2
	if(n1>n2)
	{
		n1 = n1 + n2;
		n2 = n1 - n2;
		n1 = n1 - n2;
	}
	printf("prime numbers between %d and %d are: ", n1, n2);
	for(i = n1+1; i<n2; ++i)
	{
	// flag will be equal to 1 if i is prime
		flag = checkPrime(i);
		if(flag == 1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
