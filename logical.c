#include<stdio.h>
main()
{
	int a=10,b=20,c=30;
	printf("a<b && a<c: %d\n",(a<b)&&(a<c));
	printf("a<b && a>c: %d\n",(a<b)||(a>c));
	printf("a<b: %d\n",!(a<b));
}
