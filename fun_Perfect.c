#include<stdio.h>
int checkPerfect(int n1);
void PerfectNumbers(int stlimit, int endlimit);

int main()
{
	int stlimit, endlimit;
	printf("\n\n Function: perfect num in a given range: \n");
	printf("Input lowest search limit of perfect num : ");
	scanf("%d", &stlimit);
	printf("Input highest search limit of perfct num : ");
	scanf("%d", &endlimit);
	
	printf("\n perfect between %d to %d are : \n", stlimit, endlimit);
	PerfectNumbers(stlimit, endlimit);
	printf("\n\n");
	return 0;
}

int checkPerfect(int n1)
{
	int i, sum;
	sum = 0;
	for(i = 1; i<n1; i++)
	{
		if(n1 % i == 0)
		{
			sum = sum + i;
		}
	}
if(n1 == sum)
{
	return 1;
}
else
{
	return 0;
}
}
void PerfectNumbers(int stlimit, int endlimit)
{
	while(stlimit<= endlimit)
	{
		if(checkPerfect(stlimit))
		{
			printf(" %d ", stlimit);
		}
		stlimit++;
	}
}
