#include<stdio.h>
main()
{
	int n,i=1;
	printf("How many numbers you want to print :");
	scanf("%d",&n);
	while(n>=i)
	{
		printf("%d\n",n);
		n--;
	}
}
