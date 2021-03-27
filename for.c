#include<stdio.h>
int main()
{
	int i,j,k;
	printf("Enter start of series : ");
	scanf("%d",&j);
	printf("Enter end of the series: ");
        scanf("%d",&k);
	for (i=j;i<=k;i++)
	{
		printf(" %d",i);
	}
	return 0;
}
