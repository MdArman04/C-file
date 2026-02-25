#include<stdio.h>
int main()
{
	int i, num, sum = 0; 
	printf("enter the number\n");
	scanf("%d", &num);
	for(i = 1; i<num; i++)
	{
		if(num % i == 0)
		{
			sum = sum + i;
		}
	}
	if(sum == num)
	{
		printf("perfect number: %d\n", num);
	}
	else
	{
		printf("not a perfect number: %d\n", num);
	}
}
