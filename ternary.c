#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter the 1st value : ");
  scanf("%d",&a);
  printf("Enter the 2nd value : \n");
  scanf("%d",&b);
  c=a>b?a:b; // (ternary operator) 
             // syntax : var3 = var1 (condition) var2 ? true : false
             // eg. if a is greater than b then value of a asign to c 
             // and if b is greater than a then value of b asign to c

  if(c==a)
     printf("A = %d is greater \n",a);
  else
     printf("B = %d is greater \n",b); 
  return 0;
}
