#include<stdio.h>
int GetFactorial(int number);
int main()
{
	int num, x, temp, sum = 0;
	printf("enter the number\n");
	scanf("%d", &num);
	temp = num;
	while(num>0)
	{
		x = num % 10;
		sum = sum + GetFactorial(x);
		num = num / 10; 
	}
	if(sum == temp)
	{
		printf("number is strong\n", temp);
	}
	else
	printf("not a strong number\n", temp);
}
int GetFactorial(int number)
{
	int fact = 1, i;
	for(i = 1; i<=number; i++)
	{
		fact = fact * i;
	}
	return fact;
}
