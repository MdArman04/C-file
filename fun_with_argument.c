#include<stdio.h>
void avg(int, int, int, int, int);
void main()
{
	int a, b, c, d, e;
	printf("enter the numbers to get avg\n");
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
	avg(a,b,c,d,e);
}
void avg(int a, int b, int c, int d, int e)
{
	float avg;
	avg = (a+b+c+d+e)/5;
	printf("Average of five number is : %f", avg);
}
