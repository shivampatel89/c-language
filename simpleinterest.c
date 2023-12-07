#include<stdio.h>
main()
{
	float amount,rateofinterest,time,interest;
	printf("Enter the amount :");
	scanf("%f",&amount);
	printf("\nEnter the rateofinterest :");
	scanf("%f",&rateofinterest);
	printf("\nEnter the time in year:");
	scanf("%f",&time);
	interest=amount*rateofinterest*time/100;
	printf("Total interest is : %f",interest);
	
}
