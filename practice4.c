#include<stdio.h>
main()
{
	int a;
	printf("Enter your marks :");
	scanf("%d",&a);
	if(a>=90&&a<100)
	{
		printf("Your grade is A");
	}
	else if(a<90&&a>=80)
	{
		printf("Your grade is B");
	}
	else if(a<80&&a>=60)
	{
		printf("Your grade is C");
	}
	else if(a<60&&a>=45)
	{
		printf("Your grade is D");
	}
	else 
	{
		printf("Fail!!");
	}
}
