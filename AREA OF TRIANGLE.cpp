#include <stdio.h>
main()
{
	float r,area=0,circumference=0;
	printf("take the value of radius");
	scanf("%f",&r);
	area=3.14*r*r;
	circumference=2*3.14*r;
	printf("area and circumference of circile is %f and %f",area,circumference);
}
