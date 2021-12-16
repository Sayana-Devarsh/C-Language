#include<stdio.h>
main()
{
	char c;
	printf("enter a char");
	scanf("%c",&c);
	
	if (c=='a'|| c=='e'|| c=='i'||c=='o'||c=='u')
	
	{
		printf("%C is a vowl",c);
	}
	else 
	{
		printf("%c is consonant",c);
	}
}
