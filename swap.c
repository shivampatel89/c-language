#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter A :");
	scanf("%i",&a);
	
	printf("Enter B :");
	scanf("%i",&b);
	
	printf("Before swapping A and B are :%i and %i \n",a,b);
	
	c=a;
	a=b;
	b=c;
	printf("Afters wapping A and B are :%i and %i\n",a,b);
	
}
