#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter a value of A :");
	scanf("%d",&a);
	printf("Enter a value of B :");
	scanf("%d",&b);
	printf("Enter a value of C :");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("A is the gratest number among three");
	}
	else if (b>a&&b>c)
	{
		 printf("B is the gratest number among three");	
	}
	else if (c>a&&b<c)
	{
		 printf("C is the gratest number among three");	
	}
}
