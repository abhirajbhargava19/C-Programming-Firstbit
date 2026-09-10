#include <stdio.h>

int main() 
{
    int n = 121;
    int temp = n; 
    int reverse = 0;
    int rem;

    while (n > 0)
	{
        rem = n % 10;                    
        reverse = (reverse * 10) + rem;   
        n = n / 10;                      
    }

    if (reverse == temp)
	 {
        printf("Palindrome\n");
    } 
	else
	 {
        printf("Not Palindrome\n");
    }
}
