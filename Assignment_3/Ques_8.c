#include <stdio.h>

int main() 
{
    int n = 145;
    int temp = n; 
    int sum = 0;
    int rem;

    while (n > 0)
	 {
        rem = n % 10; 
        
        int fact = 1;
        int i = 1;
        while (i <= rem)
		{
            fact = fact * i;
            i++;
        }
        
		sum = sum + fact; 
        n = n / 10;       
    }

    if (sum == temp)
	 {
        printf("Strong\n");
    }
	 else 
	 {
        printf("Not Strong\n");
    }
}
