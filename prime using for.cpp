#include <stdio.h>
main()
{
	int n,i,count=0;
	printf("enter a nummber:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
	   if (n%i==0)
	   count=count + 1;	
	}
	if (count == 2)
		printf("IT IS A PRIME NUMBER");
		else 
		printf("IT IS NOT A PRIME NUMBER");
}

