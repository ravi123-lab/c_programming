#include<stdio.h>
void simple_function();
int main()
{
	printf("hello from main() ");
	//calling function simple_function()
	simple_function();
	return 0;
}
void simple_function()
{
	printf("\nhello from simple_function() \n");
}
