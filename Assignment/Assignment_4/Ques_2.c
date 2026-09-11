#include <stdio.h>

int main()
 {
    int n = 50; 
    int i, j;

    printf("Prime numbers between 1 and %d are:\n", n);

    for (i = 2; i <= n; i++) 
	{
        for (j = 2; j < i; j++) 
		{
            if (i % j == 0) {
                break; 
            }
        }
        if (i == j)
            printf("%d ", i);
    }
}
