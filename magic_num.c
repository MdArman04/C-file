#include<stdio.h>
int main()
{
	int num, x, y, sum = 0, i, sum1 = 0, temp;
	printf("enter the number to find the magic number\n");
	scanf("%d", &num);
	temp = num;
	for(i = 1; i<=num; i++)
	{
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
			sum/= 10;
		}
		if(sum ==1 || sum1 == 1)
		{
			printf("%d is MAGIC NUMBER", temp);
		}
		else
		{
				printf("%d is not a MAGIC NUMBER", temp);
		}
		
	}
}
