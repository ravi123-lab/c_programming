#include<stdio.h>
int main()
{
	int num;
	printf("Enter Your Age : ");
	scanf("%d",&num);
	printf("\nEnterd Age is : %d ",num);
	if (num>10)
		printf("\nYou able to work for this company \n");
	else
		printf("\nyou are not able to work for this company\n");
	return 0;
}

