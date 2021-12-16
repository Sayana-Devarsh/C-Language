#include <stdio.h>
main()
{
	int basic , gross=0;
	printf("take the given values");
	scanf("%d",&basic);
    if (basic<=10000)
	gross=basic*0.2*0.5;
	printf("%d is gross amount",gross);
	else
	if (basic <=25000)
	gross=basic*0.25*0.9;
	printf("%d is gross amount",gross);
	else 
	if (basic>=25000)
	gross=basic*0.3*0.95;	
	printf("%d is gross amount",gross);
}
