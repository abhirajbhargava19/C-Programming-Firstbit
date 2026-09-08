#include <stdio.h>

int main() {
    int a = 25; 
    int b = 45;
    int c = 12;

    if (a > b)
        if (a > c)
            printf("%d is greatest", a);
            
        else
            printf("%d is greatest", c);
            
    else if (b > c)
     printf("%d is greatest", b);
     
    else
    printf("%d is greatest", c);

}
