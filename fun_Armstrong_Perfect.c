#include<stdio.h>

int checkArmstrong(int n1);
int checkPerfect(int n1);

int main()
{
	int n1;
	printf("\n\n Function: check the Armstrong and Perfect numbers: \n");
	scanf("%d", &n1);
	
	if(checkArmstrong(n1))
	{
		printf("The %d is Armstrong number. \n", n1);
	}
	else
	{
		printf("The %d is not a Armstrong number. \n", n1);
	}
	
	if(checkPerfect(n1))
	{
		printf("The %d is Perfect number. \n", n1);
	}
	else
	{
		printf("The %d is not a Perfect number. \n", n1);
	}
	return 0;
}
int checkArmstrong(int n1)
{
	int ld, sum = 0, num;
	num = n1;
	while(num!=0)
	{
		ld = num % 10;
		sum = sum + ld*ld*ld;
		num = num/10;
	}
	return (n1 == sum);
}

int checkPerfect(int n1)
{
	int i, sum=0, num;
	num = n1;
	for(i = 1; i<num; i++)
	{
		if(num % i == 0)
		{
			sum = sum+ i;
		}
	}
	return (n1 == sum);
}
