#include <stdio.h>
main()
{
	int x,y;
	printf("get the numbers");
	scanf("%d %d",&x,&y);
	if (x>y)
	printf("%d is maximum number and %d is minimum number",x,y);
	else
	printf("%d is minimum number and %d is maximum number",x,y);
}
