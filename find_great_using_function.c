#include<stdio.h>
int great(int,int);
int main()
{
	int num1,num2,num3;
	printf("Enter first number :");
	scanf("%d",&num1);
	printf("Enter second  number :");
	scanf("%d",&num2);
	num3=great(num1,num2);
	printf("Greate value is :%d ",num3);
	return 0;
}
int great(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

