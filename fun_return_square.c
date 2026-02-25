#include<stdio.h>
int square();
int main()
{
	printf("Going to calculate area of sqr\n");
	float area = square();
	printf("Area of Sqaure is: %f", area);
}
int sqaure()
{
	float side;
	printf("enter the lenght in meter\n");
	scanf("%f",&side);
	return side*side;
}
