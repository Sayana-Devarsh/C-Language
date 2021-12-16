#include <stdio.h>
main()
{
	int a,b,c,d,w,x,y,z,total=0;
	printf("number of 10 rupee notes are");
	scanf("%d",&a);
	printf("number of 20rupee notes are");
	scanf("%d",&b);
	printf("number of 50 rupee notes are");
	scanf("%d",&c);
	printf("number of 100 rupee notes are");
	scanf("%d",&d);
	w=10*a;
	x=20*b;
	y=50*c;
	z=100*d;
	total=w+x+y+z;
	printf("the total money in the kitty bank is %d",total);
}
