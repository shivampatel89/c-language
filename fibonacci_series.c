#include<stdio.h>
main()
{
	int a=0,b=1,i,n,total;
	printf("Enter a term :");
	scanf("%d",&n);
	total=a+b;
	printf("Fibonacci Series :%d,%d",a,b);
	
	for(i=3;i<=n;i++)
	{
		
		printf(",%d",total);
		a=b;
		b=total;
		total=a+b;
		
		
	}
}
