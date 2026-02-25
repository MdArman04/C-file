#include<stdio.h>
#include<math.h>
int main()
{
	float radius, area;
	printf("enter the radius of circle\n");
	scanf("%f", &radius);
	area = (float)3.14159*radius*radius;
	printf("Area of circle with radius %f is %f\n", radius, area);
	
}
