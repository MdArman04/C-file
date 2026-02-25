#include<stdio.h>
int GetsumofDgts(int num);
int GetReverseofNumber(int sumofDgts);
int main()
{
	int i, num, sumofDgts,reverseofnumber;
	printf("enter the number to get Magic Number\n");
	scanf("%d", &num);
	for(i = 1; i<=num; i++)
	{
		sumofDgts = GetsumofDgts(i);
		reverseofnumber = GetReverseofNumber(sumofDgts);
		if(sumofDgts*reverseofnumber == i)
		{
			printf("%d is a Magic Number\n", i);
		}
	}
}
int GetsumofDgts(int n)
{
	int sum = 0, x;
	while(n>0)
	{
		x = n % 10;
		sum = sum + x;
		n/=10;
	}
	return sum;
}
int GetReverseofNumber(int n)
{
	int rev = 0, x;
	while(n>0)
	{
		x = n % 10;
		rev = rev*10 + x;
		n/= 10;
	}
	return rev;
}
