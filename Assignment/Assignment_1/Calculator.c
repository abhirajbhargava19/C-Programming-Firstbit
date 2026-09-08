#include <stdio.h>

int main() {
    int num1 = 10;    
    int num2 = 7;      
    char op = '+';     

    if (op == '+')
        printf("Result is %d", num1 + num2);
        
    else if (op == '-')
        printf("Result is %d", num1 - num2);
        
    else if (op == '*')
        printf("Result is %d", num1 * num2);
        
    else if (op == '/')
        printf("Result is %d", num1 / num2);
        
    else if (op == '%')
        printf("Result is %d", num1 % num2);
        
    else
        printf("Invalid operator");

}
