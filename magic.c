#include<stdio.h>
int main()
{
	int num, x, sum = 0, sum1 = 0, y, temp;
	printf("enter the number\n");
	scanf("%d", &num);
	temp = num;
	while(num>0)
	{
		x = num % 10;
		sum = sum + x;
		num/=10;
	}
	while(sum>=10)
	{
		y = sum % 10;
		sum1 = sum1 + y;
		sum/=10;
	}
	if(sum == 1 || sum1 == 1)
	{
		printf("%d is a Magic number", temp);
	}
	else
	{
		printf("%d is not a Magic number", temp);
	}
}
