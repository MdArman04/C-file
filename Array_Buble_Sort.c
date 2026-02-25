#include<stdio.h>
void Bubble_sort(int a[]);
void main()
{
	int arr[10] = {10, 20, 45, 65, 500, 800, 5, 90, 35, 55};
	Bubble_sort(arr);	
}

void Bubble_sort(int a[])
{
	int i, j, tmp;
	
	for(i = 0; i<10; i++)
	{
		for(j = i+1; j<10; j++)
		{
			if(a[i]>a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	printf("printing the sorted elements list..\n");
	for(i = 0; i<10; i++)
	{
		printf("%d\n", a[i]);
	}
}
