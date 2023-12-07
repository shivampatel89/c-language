#include<stdio.h>
main()
{
	float array[5];
	int i;
	printf("Enter array elements :\n");
	for(i=0;i<=4;i++)
	{
		scanf("%f",&array[i]);
	}
	

	for(i=1;i<=4;i++)
	{
		printf("%.2lf\t",array[i]);
	}
}
