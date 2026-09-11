#include <stdio.h>

int main()
 {
    int n = 1000; 

    printf("Strong numbers between 1 and %d are:\n", n);

    for (int num = 1; num <= n; num++)
	 {
        int d1 = num % 10;          
        int d2 = (num / 10) % 10;   
        int d3 = num / 100;         

        
        int f1 = 1, f2 = 1, f3 = 1;
        for (int i = 1; i <= d1; i++) f1 *= i;
        for (int i = 1; i <= d2; i++) f2 *= i;
        for (int i = 1; i <= d3; i++) f3 *= i;

       
        if ((num < 10 && f1 == num) || 
            (num >= 10 && (num < 100) && (f1 + f2 - 1) == num) || 
            (num >= 100 && (f1 + f2 + f3) == num)) {
            printf("%d ", num);
        }
    }
}
