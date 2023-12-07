#include<stdio.h>
main()
{
	int a;
	printf("Enter value of a less than 20 :");
	scanf("%d",&a);
	if(a>20)
	{
		printf("Enter valid number");
	}
	while(a<=20)
	{
		printf("%d shivam\n",a);
		a++;
	}
	
}
