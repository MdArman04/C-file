#include<stdio.h>
int main()
{
	int i, j;
	float salary, bonus;
	char gender;
	printf("enter M for male and F for female\n");
	scanf("%c", &gender);
	printf("enter the salary\n");
	scanf("%f", &salary);
	if(gender == 'M' || gender == 'm')
	{
		if(salary > 10000)
		{
			bonus = (float)(salary*0.05);
		}
		else
		bonus = (float)(salary*0.07);
	}
	if(gender == 'F' || gender == 'f')
	{
		if(salary > 10000)
		{
			bonus = (float)(salary*0.1);
		}
		else
		bonus = (float)(salary*0.12);
	}
	salary+=bonus;
	printf("bonus = %.2f\nsalary = %.2f\n", bonus, salary);
}
