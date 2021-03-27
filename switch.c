#include<stdio.h>
int main()
{
  int num;
  printf("Enter the number of day in week : ");
  scanf("%d",&num);
  switch(num)
    {
       case 1 :
          printf("MONDAY");
          break;
       case 2 :
          printf("TUESDAY");
          break;
       case 3 :
          printf("WEDNESDAY");
          break;
       case 4 :
          printf("THURSDAY");
          break;  
       case 5 :
          printf("FRIDAY");
          break;
       case 6 :
          printf("SATURDAY");
          break;
       case 7 :
          printf("SUNDAY");
          break;
       default:
          printf("you entered wrong day :%d",num);
    }

  return 0;
}
