#include<stdio.h>
// if LSB is 1 then num is Odd and 0 the num is Even
int checkeEven_Odd(int n)
{
	return (n & 1); // the & opearation does the bitwise and
}
int main()
{
	int n;
	printf("enter the number to know whether number is evnn or odd:\n");
	printf("input any number: ");
	scanf("%d", &n);
	if(checkeEven_Odd(n))
	{
		printf("entered number is odd.\n\n");
	}
	else
	{
		printf("entered num is even. \n\n");
	}
	return 0;
}
