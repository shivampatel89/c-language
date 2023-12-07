#include<stdio.h>
main()
{
	int leap;
	printf("Enter year :");
	scanf("%d",&leap);
	if(leap%400==0)
	{
		printf("This is leap year\n");
	}
	else if (leap%100==0)
	{
		printf("This is not leap year\n");
	}
	else if(leap%4==0)
	{
		printf("This is leap year");
	}
	
}
