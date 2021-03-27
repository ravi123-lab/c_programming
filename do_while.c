#include<stdio.h>
int main()
{
        int i;
        char name[10];
        printf("Enter your name : ");
        scanf("%s",name);
        do
        {
                printf("\twelcome %s\n",name);
                i++;
        }while(i<=10);
        return 0;
}
