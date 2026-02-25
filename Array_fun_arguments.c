#include<stdio.h>
int minarray(int arr[], int size)
{
	int min = arr[0];
	int i = 0;
	for(i = 1; i<size; i++)
	{
		if(min>arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}
int main()
{
	int i = 0, min = 0;
	int numbers[] = {4, 5, 7, 8, 2, 9};
	
	min = minarray(numbers, 6);
	printf("minimum number is : %d", min);
	return 0;
}
