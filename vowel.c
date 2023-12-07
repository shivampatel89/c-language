#include<stdio.h>
main()
{
	char ch;
	printf("Enter any alphabet :");
	scanf("%c",&ch);
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	{
		printf("This is vowel");
		
	}
	else
	{
		printf("This is consonent");	
	}
}
