#include<stdio.h>
int main()
{
        int i,j,k;
        for(i=0;i<=10;i++)
        {
                for(j=i;j>=0;j--)
                {
			for(k=j;k<=3;k++)
			{
				printf("*");
			}
                }
                printf("\n");
        }
        return 0;
}
