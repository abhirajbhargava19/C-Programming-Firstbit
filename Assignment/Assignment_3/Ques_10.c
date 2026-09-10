#include <stdio.h>

int main()
 {
    int n = 12345;
    int last = n % 10;

    while (n >= 10)
	 {
        n = n / 10;
    }
    
	int first = n; 
    printf("%d (%d + %d)\n", first + last, first, last);
}
