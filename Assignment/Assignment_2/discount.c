#include <stdio.h>

int main() {
    int price = 550;  
    char student = 'y'; 
    int discount, final_amount;

    if (student == 'y')
        if (price > 500)
            discount = (price * 20) / 100;
        else
            discount = (price * 10) / 100;
    else
        if (price > 600)
            discount = (price * 15) / 100;
        else
            discount = 0;

    final_amount = price - discount;

    printf("Final bill amount is %d", final_amount);

}
