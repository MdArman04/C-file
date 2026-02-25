#include<stdio.h>
int main()
{
	int i, num, sum = 0;
	printf("enter the number\n");
	scanf("%d", &num);
	
	for(i = 1; i<=num; i++)
	{
		sum = sum + i;
	}
	printf("%d\n", sum);
}
