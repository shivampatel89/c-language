#include<stdio.h>
main()
{
	char grade;
	printf("Enter your grade A/B/C/D/E/F:");
	scanf("%c",&grade);
	
	switch(grade)
	{
		case 'A':printf("you score 90 marks");
		break;
		case 'B':printf("you score 80 marks");
		break;
		case 'C':printf("you score 70 marks");
		break;
		case 'D':printf("you score 60 marks");
		break;
		case 'E':printf("you score 45 marks");
		break;
		case 'F':printf("Fail !!");
		break;
		default:printf("invalid grade");
		break;
	}
	
}


