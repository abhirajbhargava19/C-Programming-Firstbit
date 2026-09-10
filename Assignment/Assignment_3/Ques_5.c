#include <stdio.h>

int main()
 {
    int n = 153;
    int temp = n;
    int sum = 0;
    int rem;

    
    while (n > 0) 
	{
        rem = n % 10;                  
        sum = sum + (rem * rem * rem); 
        n = n / 10;                          
    }

    if (sum == temp)
	 {
        printf("Armstrong\n");
    } 
	else
	 {
        printf("Not Armstrong\n");
    }
}

