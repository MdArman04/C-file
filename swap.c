#include<stdio.h>
int main()
{
	int a, b ,c;
	printf("enter number1: ");
	scanf("%d", &a);
	printf("enter the number2: ");
	scanf("%d", &b);
	a = b; // 54
	b = a;  // 45
	c = b; // 54
	printf("result = %d\n%d\n", a, c);
}
