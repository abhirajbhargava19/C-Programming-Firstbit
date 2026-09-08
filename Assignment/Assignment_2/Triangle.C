#include <stdio.h>

int main() {
    int side1 = 5; 
    int side2 = 5;
    int side3 = 5;

    if (side1 == side2 && side2 == side3)
        printf("Triangle is equilateral");
        
    else if (side1 == side2 || side2 == side3 || side1 == side3)
        printf("Triangle is isosceles");
        
    else
        printf("Triangle is scalene");

}
