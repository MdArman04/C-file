 #include<stdio.h>
 // febonacii series... 0 1 1 2 3 5 8 13
 int main()
 {
 	int a = 0, b = 1, c, count, num;
 	printf("enter the number: ");
 	scanf("%d", &num);
 	printf("the series\n");
 	printf("%d\n%d\n", a,b);
 	count = 2;
 	while(count<num)
 	{
 		c = a + b;
 		a = b;
 		b = c;
 		printf("%d\n", c);
 		count ++;
	}
 }
