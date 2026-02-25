#include<stdio.h>
int main()
{
	int i, j, num, temp1, temp2, sum = 0;
	printf("enter the number\n");
	scanf("%d", &num);
	printf("Armstrong numbers are\n");
	for(i = 1; i<=num; i++)
	{
		sum = 0;
		temp1 = i;
		temp2 = i;
		while(temp1>0)
		{
			j = temp1 % 10;
			sum = sum + j*j*j;
			temp1 = temp1 / 10;
		}
		if(sum == temp2)
		{
			printf("%d\n", sum);
		}
	}
}
