#include<stdio.h>
#include<math.h>
int main()
{
	float len, breath, area;
	printf("enter the len and breath of rectangle\n");
	scanf("%f %f", &len,&breath);
	area = (float)len*breath;
	printf("Area of Rectangle is %f\n", area);
}
