#include<stdio.h>
void change(int *num)
{
	printf("before adding value inside fun num= %d\n", *num);
	(*num)+=100;
	printf("after adding value inside fun num= %d\n", *num);
}
int main()
{
	int x = 100;
	printf("before fun call x = %d\n", x);
	change(&x);
	printf("after fun call x = %d\n", x);
	return 0;
}
