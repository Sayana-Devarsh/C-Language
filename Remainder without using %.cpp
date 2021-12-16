#include<stdio.h>
main()
{
    int a,b,rem;
    printf("enter Divident");
    scanf("%d",&a);
    printf("enter divisor");
    scanf("%d",&b);
    rem=a-(a/b)*b;
    printf("The Remainder is %d",rem);
	}
