#include <stdio.h>
main()
{
	int a;
	printf("take an year");
	scanf("%d",&a);
	if (a%4==0 && a%100!=0||a%400==0)
	printf("year is a leap year",a);
	else
	printf("year is not leap year",a);
}
