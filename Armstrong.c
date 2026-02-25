#include<stdio.h>
int main()
{
	int num, temp, x, sum = 0;
	printf("enter the number\n");
	scanf("%d", &num);
	temp = num;
	while(num>0)
	{
		x = num % 10;
		sum = sum + x*x*x;
		num = num/10;
	}
	if(sum == temp)
	{
		printf("number is Armstrong: %d\n", temp);
	}
	else
	{
		printf("number is not a Armstrong: %d\n", temp);
	}
}
