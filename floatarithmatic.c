#include<stdio.h>
main(){
	float a,b,sum,sub,div,mul;
	printf("Enter two values: ");
	scanf("%f%f",&a,&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	
	printf("add:%f\n sub:%f\n mul:%f\n div:%f\n ",sum,sub,mul,div);
}
