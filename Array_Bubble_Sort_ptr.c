#include<stdio.h>
int *Bubble_Sort(int[]);
void main()
{
		int arr[10] = {12, 24, 36, 48, 90, 10, 15, 60, 80, 90};
		int i;
		int *p = Bubble_Sort(arr);
		printf("printing sorted elements..\n");
		for(i = 0; i<10; i++)
		{
			printf("%d\n", *(p+i));
		}	
}

int *Bubble_Sort(int a[])

{
	int i, j, tmp;
	for(i = 0; i<10; i++)
	{
		for(j = i + 1; j<10; j++)
		{
			if(a[i]>a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
		
	}
	return a;
}
