#include<stdio.h>
main(){
	int a,b,sum,sub,div,mul,mod;
	printf("Enter two values: ");
	scanf("%d%d",&a,&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mod=a%b;
	printf("add:%d\n sub:%d\n mul:%d\n div:%d\n mod:%d",sum,sub,mul,div,mod);
}
