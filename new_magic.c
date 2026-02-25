#include<stdio.h>
int GetsumofDigits(int num);
int GetReverseofNumber(int sumofDigits);
int main()
{
	int num, sumofDigits, reverseofNumber;
	printf("enter the number to get Mgaic Number\n");
	scanf("%d", &num);
	sumofDigits = GetsumofDigits(num);
	reverseofNumber = GetReverseofNumber(sumofDigits);
	if(sumofDigits*reverseofNumber==num)
	{
		printf("%d is a Magic number\n", num);
	}
	else
	{
		printf("%d is not a Magic number\n", num);
	}
}

int 	GetsumofDigits(int n)
{
	int sum = 0, x;
	while(n>0)
	{
		x = n % 10;
		sum = sum + x;
		n/= 10;
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
		n /= 10;
	}
         return rev;
}
