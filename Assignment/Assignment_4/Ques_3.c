#include <stdio.h>

int main() 
{
    int n = 1000; 
    int num, i;

    printf("Perfect numbers between 1 and %d are:\n", n);

    for (num = 1; num <= n; num++)
	 {
        int check = num;
        for (i = 1; i < num; i++)
		 {
            if (num % i == 0)
			 {
                check = check - i; 
            }
        }
        if (check == 0) 
            printf("%d ", num);
    }
}
