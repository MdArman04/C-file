#include<stdio.h>
#define MAX 100

int findMaxElem(int []);
int n;

int main()
{
	int arr1[MAX], maxelem, i;
	printf("\n\n Function: get largest element an array :\n");
	printf(" Input the num of element to be stored in array :");
	scanf("%d", &n);
	printf("Input the %d element in an array :\n", n);
	for(i = 0; i<n; i++)
	{
		printf("element - %d : ", i);
		scanf("%d", &arr1[i]);
	}
	maxelem = findMaxElem(arr1);
	
	printf(" largest element in the array is : %d\n\n", maxelem);
	return 0;
}
int findMaxElem(int arr1[])
{
	int i, maxelem;
	maxelem = arr1[0];
	while(i<n)
	{
		if(maxelem<=arr1[i])
		{
			maxelem = arr1[i];
			i++;
		}
	}
	return maxelem;
}
