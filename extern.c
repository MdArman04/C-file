#include<stdio.h>
int a = 20;
int main()
{
	extern int a;
	printf("%d", a);
}
