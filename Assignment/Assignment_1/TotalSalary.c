#include <stdio.h>

int main() {
    int basic = 4500; 
    int da, ta, hra, total_salary;

    if (basic <= 5000) {
        da = (basic * 10) / 100;  // 10% DA
        ta = (basic * 20) / 100;  // 20% TA
        hra = (basic * 25) / 100; // 25% HRA
    } else {
        da = (basic * 15) / 100;  // 15% DA
        ta = (basic * 25) / 100;  // 25% TA
        hra = (basic * 30) / 100; // 30% HRA
    }

    total_salary = basic + da + ta + hra;

    printf("Total salary ", total_salary);

}

