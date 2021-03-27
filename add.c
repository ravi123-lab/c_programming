#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d \n %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("\n %d + %d = %d \n", number1, number2, sum);
    return 0;
}
