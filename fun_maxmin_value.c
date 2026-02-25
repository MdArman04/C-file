# include<stdio.h>
# define max 10
int *maxmin(int arr[], int v);
int main()
{
	int arr[max];
	int n, i, *p;
	printf("Number of values want to Input :\n");
	scanf("%d", &n);
	printf("Input %d values\n", n);
	for(i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);	
	}
	p = maxmin(arr, n);
	printf("Minimum value is : %d\n", *p++);
	printf("Maximum value is : %d\n", *p);
}

int *maxmin(int arr[], int v)
{
	int i;
	static int result_mm[2];
	result_mm[0] = arr[0];
	result_mm[1] = arr[0];
	for(i = 1; i<v; i++)
	{
		if(result_mm[0] > arr[i])
		{
			result_mm[0] = arr[i];
		}
		if(result_mm[1] < arr[i])
		{
			result_mm[1] = arr[i];
		}
	}
	return result_mm;
}
