#include<stdio.h>
int main()
{
	int x, y;
	printf("enter a number: ");
	scanf("%d", &x);
	
	y = (x / 10) * 10;
	printf("%d\n", y);
	return 0;
	
}
