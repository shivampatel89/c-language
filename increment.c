#include<stdio.h>
main()
{
	int a=10;
	printf("The value of a is:%d\n",a++);
	printf("The value of a after increment is: %d\n",a++);
	printf("The value of a after increment is: %d\n",a++);
	printf("The value of a after increment is: %d\n",a++);
	
	printf("The value of a is:%d\n",a--);
	printf("The value of a after decrement is: %d\n",a--);
	printf("The value of a after decrement is: %d\n",a--);
	printf("The value of a after decrement is: %d\n",a--);
}
