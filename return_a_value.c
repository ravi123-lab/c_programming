#include<stdio.h>
int return_a_value();   
int main()
{

	printf("hello from main() ");
        //calling return_a_value()
	int b=return_a_value();
	printf("returned value from return_a_value() function is :%d\n",b);
	return 0;
}
int return_a_value()    
{                                                                  printf("\nfunction return_a_value : \n");
	int a;
	printf("\nenter the value for return to main function() : ");
	scanf("%d",&a);
	return a;
}
