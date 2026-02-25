#include<stdio.h>
int main()
{
	int nodays, yrs, week, days;
	printf("enter the total days\n");
	scanf("%d", &nodays);
	
	yrs = nodays/365;
	week = (nodays % 365)/7;
	days = (nodays % 365) % 7;
	printf(" yrs: %d\n week: %d\n days: %d\n", yrs, week, days);
}
