#include<stdio.h>
main()
{
	int n;
	printf("Enter a number :");
	scanf("%d",&n);
	if(n>0)
	{
		printf("Number is positive");
	}
	else if(n<0)
	{
		printf("Number is Negative");
	}
	else if(n==0)
	{
		printf("Number is Zero");
	}
}
