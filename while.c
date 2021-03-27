#include<stdio.h>
int main()
{
	int i;
	char name[10];
	printf("Enter your name : ");
	scanf("%s",name);
	while(i<=10)
	{
		printf("\twelcome %s\n",name);
		i++;
	}
	return 0;
}

