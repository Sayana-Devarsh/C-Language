#include <stdio.h>
main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if (n%5==0)
	{
		if(n%11==0)
		printf("%d is divisible by 5 and 11",n);
		else
		printf("%d is divisible only by 5",n);
	}
	
		else
		if(n%11==0)
		printf("%d is divisible by 11",n);
		else
		printf("%d is not divisible by both 11 and 5",n);
	
	
}
