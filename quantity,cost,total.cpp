#include <stdio.h>
main()
{
	int quantity,cost,total=0;
	printf("enter quantity of items:");
	scanf("%d",&quantity);
	printf("enter cost of items:");
	scanf("%d",&cost);
	total=quantity*cost;
	printf("total cost of items is %d",total);
	
}
