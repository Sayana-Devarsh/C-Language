#include <stdio.h>
main()
{
	float a,b,sum=0,sub=0,mult=0,div=0,rem=0;
	printf("enter the first number.");
	scanf("%f", &a);
	printf("enter the second number.");
	scanf("%f",&b);
	sum = a + b;
	printf("sum is %f \n",sum);
	sub = a - b;
	printf("difference is %f \n", sub);
	mult = a * b;
	printf("their multiplied value is %f \n", mult);
	div = a / b;
	printf("their divison is %f \n", div);
}
