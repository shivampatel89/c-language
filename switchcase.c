#include<stdio.h>
main()
{
	int choice,a,b,total;
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulo\n");
	printf("Enter your choice 1/2/3/4/5:");
	scanf("%d",&choice);
	printf("Enter first Value:");
	scanf("%d",&a);
	printf("Enter second Value:");
	scanf("%d",&b);
	
	switch(choice)
	{
		case 1:	total=a+b;
				break;
				
		case 2:total=a-b;
				break;
				
		case 3:total=a*b;
				break;
				
		case 4:	total=a/b;
				break;
				
		case 5:total=a%b;
				break;	
				
		default :printf("wrong choice\n");								
	}
	
	printf("Your Answer is :%d",total);
}
