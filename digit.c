#include<stdio.h>
int main()
{
	int x, num, sum = 0;
	printf("enter the number\n");
	scanf("%d", &num);
	
	while(num>0)
	{
	x = num % 10;
	sum = sum + x;
	num = num / 10;
     }
	printf("sum: %d\n", sum);
}
