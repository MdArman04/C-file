#include<stdio.h>
int main()
{
	int i, n;
	float sum = 0;
	printf("enter the value of n\n");
	scanf("%d", &n);
	for(i = 1; i<=n; i++)
	{
		sum = sum + (float)1/i;
	}
	printf("the value of\n");
	for(i = 1; i<=n; i++)
	{
		if(i<n)
		{
			printf("1/%d+ ", i);
		}
		else
		{
			printf("1/%d= ", i);
		}
	}
	printf("%f", sum);
}
