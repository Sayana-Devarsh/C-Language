#include <stdio.h>
main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	switch (n%2)
	{
		case 0:
		printf("%d is an even number",n);
		break;
		default:
		printf("%d is odd number",n);
	}
}
