#include<stdio.h>

void checkStrong(int *n) {
	int num, i, digit, sum = 0, fact;

	for(num = *n; num > 0; num = num/10) {
		digit = num % 10;
		fact = 1;
		for(i = 1; i <= digit; i++)
			fact = fact * i;
		sum = sum + fact;
	}
	if(sum == *n)
		printf("%d is Strong", *n);
	else
		printf("%d is Not Strong", *n);
}
int main() {
	int num;
	printf("Enter a Number: ");
	scanf("%d", &num);
	checkStrong(&num);
	return 0;
}