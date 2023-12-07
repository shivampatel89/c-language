#include<stdio.h>
main()
{
	int n,i,factorial=1;
	printf("Enter a number of you want factorial :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		factorial*=i;
	}
	printf("Factorial of %d is %d",n,factorial);
}
