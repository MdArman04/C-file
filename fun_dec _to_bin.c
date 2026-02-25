#include<stdio.h>
long toBin(int);
int main()
{
	long bno;
	int dno;
	printf("enter the decimal num to get its binary: ");
	scanf("%d", &dno);
	bno = toBin(dno);
	printf("Binary num is : %ld\n\n", bno);
}
long toBin(int dno)
{
	long bno = 0, rem, f=1;
	while(dno != 0)
	{
		rem = dno % 2;
		bno = bno + rem*f;
		printf("%ld\n", bno);
		f = f*10;
		printf("%ld\n", f);
		dno = dno / 2;
	}
	return bno;
}
