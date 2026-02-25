#include<stdio.h>
int add(int x, int y); // fun declaration, defination , call
// fun defn
int add(int x, int y)
{
	return x+y; 
}
int main()
{
	int x, y, sum;
	
	scanf("%d %d", &x,&y);
	sum = add(x, y); // fun call
	printf("sum is : %d\n", sum);
	return 0;
}

