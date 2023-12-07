#include<stdio.h>
main()
{
	int arr[5];
	int i;
	printf("Enter array element :");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Reverse Element are :");
	for(i=5;i>=1;i--)
	{
		printf("%d\t",arr[i]);
	}
}
