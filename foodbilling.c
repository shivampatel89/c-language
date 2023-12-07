#include<stdio.h>

main()
{
	int a,choice,total;
	char ch;
	do
	{
		printf("===========Domino's===========\n");
		printf("\tFOOD BILLING\n");
		printf("WelCome To Our Menu\n");
		printf("1.Pizza..........Price 220/pc.\n");
		printf("2.Burger.........Price 150/pc.\n");
		printf("3.Garlic Bread...Price 250/pc.\n");
		printf("4.Water..........Price 30/ltr.\n");
		printf("\n");
		printf("Enter your item :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					printf("You have enter Pizza\n");
					printf("Enter pizza quantity :");
					scanf("%d",&a);
					total=a*220;
					printf("Total bill to pay :%d\n",total);
					break;
				}
			case 2:
				{
					printf("You have enter Burger\n");
					printf("Enter Burger quantity :");
					scanf("%d",&a);
					total=a*150;
					printf("Total bill to pay :%d\n",total);
					break;
				}
			case 3:
				{
					printf("You have enter Garlic Bread\n");
					printf("Enter Garlic Bread quantity :");
					scanf("%d",&a);
					total=a*250;
					printf("Total bill to pay :%d\n",total);
					break;
				}
			case 4:
				{
					printf("You have enter Water Bottle\n");
					printf("Enter Water Bottle quantity :");
					scanf("%d",&a);
					total=a*30;
					printf("Total bill to pay :%d\n",total);	
					break;
				}
			default :
				{
					printf("Please Enter Valid Choice\n");
					break;
						
				}
		}
		printf("Do you want to continue ? (y/n) :\n ");
	    ch=getch();
	   
	}
	
	while(ch=='y'||ch=='Y');
}
