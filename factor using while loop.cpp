#include <stdio.h>
main()
{
	int n,i=1;
	printf("enter a number:\n");
	scanf("%d",&n);
	while (i<=n/2)
	{
		if (n%i==0)
		printf(" %d ",i);
		i++;
	}
}
