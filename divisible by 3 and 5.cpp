# include <stdio.h>
main()
{
	int n;
	printf("take a number");
	scanf("%d",&n);
	if (n%3==0)
	{
		if (n%5==0)
		printf("%d is divisible by3 and 5",n);
		else
		printf("%d is divisible only by 3",n);
	}
	else
	if (n%5==0)
	printf("%d is divisible by 5",n);
	else
	printf("%d is not divisible by 3 and 5");
}
