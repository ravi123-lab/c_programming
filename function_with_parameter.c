#include<stdio.h>
void function_with_parameter(int);
int main()
{
	int a=10;
	printf("value of a main() :%d ",a);
        //calling function simple_function()
	function_with_parameter(a);
	return 0;
}
void function_with_parameter(int a)
{
	printf("\nvalue of a  function_with_parameter:%d  \n",a);
}
