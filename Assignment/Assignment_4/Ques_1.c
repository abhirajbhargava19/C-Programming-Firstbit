#include <stdio.h>

int main() 
{
    printf("Armstrong numbers between 1 and 1000 are:\n");

    for (int n = 1; n < 1000; n++)
	 {
        int d1 = n % 10;         
        int d2 = (n / 10) % 10;   
        int d3 = n / 100;        

        if ((n < 10 && d1 == n) || 
            (n >= 100 && (d1*d1*d1 + d2*d2*d2 + d3*d3*d3) == n))
	   {
            printf("%d ", n);
        }
    }   
}
