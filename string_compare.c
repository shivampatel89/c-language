#include<stdio.h>
#include<string.h>
main()
{
	char str1[10];
	char str2[10];
	printf("Enter the value of string 1 and 2 :");
	scanf("%s %s",str1,str2);
	if(strcmp(str1,str2)==0)
	{
		printf("Strings are equal");
	}
	else
	{
		printf("Strings are not equal");
	}
}
