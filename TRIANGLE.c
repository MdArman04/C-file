#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	float s, area;
	printf("enter the sides of the triangle\n");
	scanf("%d%d%d", &a,&b,&c);
	s =(float)(a+b+c)/2;
	area = (float)(sqrt(s*(s-a)*(s-b)*(s-c)));
     printf("Area of the triangle with sides %d,%d,%d is %f\n", a, b, c, area);
}
