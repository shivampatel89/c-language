#include<stdio.h>
main()
{
	int a;
	printf("Enter the value of a less than 50 :");
	scanf("%d",&a);
	do
	{
		printf("%d.Hello World\n",a);
		a++;
	}
	while(a<=50);
}
