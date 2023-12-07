#include<stdio.h>
main()
{
	int a=1,n,sum=0;
	printf("How many numbers you want to print :");
	scanf("%d",&n);
	while(a<=n)
	{
		if(a%2==0)
		{
			
			sum+=a;
			
		}
		a++;
	}
	printf("Sum of %d natural number is %d",n,sum);
}
