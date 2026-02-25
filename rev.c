#include<stdio.h>
int main()
{
	int x, y, num, dummy, rev = 0;
	printf("enter the number\n");
	scanf("%d", &num);
	dummy = num;
	while(num>0)
	{
	   x = num % 10;
	   rev = rev * 10 + x;
	   num = num/10;
    }
	printf("reverse is: %d\n", rev);
}
