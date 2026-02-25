#include<stdio.h>
int main()
{
	int x, num, rev = 0, dummy;
	printf("enter the number\n");
	scanf("%d", &num);
	dummy = num;
	while(num>0)
	{
		x = num % 10;
		rev = rev * 10 + x;
		num = num / 10;
	}
	if(rev == dummy)
	{
		printf("number is palindrome: %d\n", dummy);
	}
	else
	{
		printf("not a palindrome:%d\n", dummy);
	}
	
}
