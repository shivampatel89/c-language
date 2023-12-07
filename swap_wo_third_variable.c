#include<stdio.h>
main()
{
	int a,b;
	printf("Enter A :");
	scanf("%i",&a);
	
	printf("Enter B :");
	scanf("%i",&b);
	
	printf("Before swapping A and B are :%i and %i \n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Afters wapping A and B are :%i and %i\n",a,b);
	
}
