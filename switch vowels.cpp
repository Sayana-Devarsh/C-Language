#include <stdio.h>
main()
{
	char ch;
	printf("take an alphabet");
	ch=getchar();
	switch (ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("%c is a vowel",ch);
			break;
		default:
			printf("%c is not a vowel",ch);
	}
}
