#include <stdio.h>
main()
{
    char c;
    printf("enter digits or characters ");
    c=getchar();
    if (c>=48 && c<=57)
    printf("%c is a digit",c);
    else 
    printf("it is a character",c);
}
