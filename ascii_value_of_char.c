#include<stdio.h>
int main()
{
   char c;
   int a;
   printf("Enter a character : ");
   //scanf("%d",&a);
   scanf("%c",&c);
   printf("\n%d is a ascii value of %c\n",c,c);
   //just cross check....
   printf("enter the ascii value of character :");
   scanf("%d",&a);
   printf("\n%c is a ascii symbol of %d \n",a,a);
   return 0;
}
