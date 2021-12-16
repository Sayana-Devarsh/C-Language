#include <stdio.h>
main()
{
	float p,t,r,intrest=0;
	printf("take the values of p,t,r");
	scanf("%f%f%f",&p,&t,&r);
	intrest=p*t*r/100;
	printf("the value of simple intrest is %f",intrest);
}
