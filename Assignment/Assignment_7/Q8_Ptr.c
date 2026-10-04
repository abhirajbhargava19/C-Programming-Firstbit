#include<stdio.h>

void sumFirstLast(int *n) {
	int num, i, digits, temp, first, last;

	digits = 0;
	temp = *n;
	for(i = 0; temp > 0; i++) {
		digits++;
		temp = temp / 10;
	}
	last = *n % 10;
	first = *n;
	for(i = 0; i < digits-1; i++)
		first = first / 10;
	printf("%d", first + last);
}
int main() {
	int num;
	printf("Enter a Number: ");
	scanf("%d", &num);
	sumFirstLast(&num);
	return 0;
}