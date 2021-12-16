#include <stdio.h>
main()
{
	int a,b;
	char ch;
	printf("enter the mathematical operation");
	ch=getchar();
	printf("enter the values of a,b");
	scanf("%d%d",&a,&b);
	switch(ch)
	{
		case'+':
			printf("%d+%d=%d",a,b,a+b);
			break;
		case'-':
		printf("%d-%d=%d",a,b,a-b);
		break;
		case'*':
		printf("%d*%d=%d",a,b,a*b);
		break;
		case'/':
		printf("%d/%d=%d",a,b,a/b);
		break;	
	}
}
