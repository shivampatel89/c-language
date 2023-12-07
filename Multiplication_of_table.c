#include<stdio.h>
main()
{
	int i=1,n;
	printf("Enter value:");
	scanf("%d",&n);
	while(i<=10)
     {
	   int total=n*i;
	   printf("%d*%d=%d\n",n,i,total);
	   i++;
     }
}
