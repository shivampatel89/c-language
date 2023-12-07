#include<stdio.h>
main()
{
	int arr1[2][2];
	int i,j;
	printf("Enter array 1 element:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr1[i][j]);
		}	
	}
	
	int arr2[2][2];
	printf("Enter array 2 element:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr2[i][j]);
		}	
	}
	int arr3[2][2];
	
	printf(" Multiplication of array 1and array 2 element are:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			arr3[i][j]=arr1[i][j]*arr2[i][j];
			printf("%d\t",arr3[i][j]);
		}	
		printf("\n");
	}
	
}
