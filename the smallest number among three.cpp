#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter a number");
	scanf("%d",&a);
	printf("enter a number");
	scanf("%d",&b);
	printf("enter a number");
	scanf("%d",&c);
	if (a<b && a<c)
	{
		printf("%d is small",a);
	}
	else if (b<a && b<c)
	{
		printf("%d is small",b);
	}
	else if (c<a && c<b)
	{
		   printf("%d is small",c);
	}
	    
}
