#include<stdio.h>
int main()
{
	int num, k, temp, freq[9], flag = 0, i;
	printf("enter the number\n");
	scanf("%d", &num);
	temp = num;
	
	for(i = 0; i<10; i++)
	{
		freq[i] = 0;
	}
	while(num>0)
	{
		k = num % 10;
		freq[k]++;
		num = num / 10;
	}
	for(i = 0; i<10; i++)
	{
		if(freq[i]>1)
		{
			flag = 1;
			printf("%d --> repeated %d times\n", i, freq[i]);
		}
	}
	if(flag == 0)
	{
		printf("No repeated digits\n");
	}
	else
	{
		printf("Repeated digits aren : %d\n");
	}
	
}
