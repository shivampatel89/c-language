#include<stdio.h>
main()
{
	int n,i=1,sum=0;
	printf("How many numbers you want to print :");
	scanf("%d",&n);
	while(i<=n)
	{
		sum+=i;
		
		i++;
	}
	printf("Sum of %d natural number is %d",n,sum);
}
