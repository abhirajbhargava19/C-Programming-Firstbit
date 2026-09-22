#include <stdio.h>

int main() {
	int units;
	int bill;

	printf("Enter units Electricity Bill: ");
	scanf("%d", &units);

	if (units <= 0) {
		printf("Invalid input",units);
	} else if (units <= 50) {
		bill = units * 30;
	} else if (units <= 150) {
		bill = (50 * 30) + (units - 50) * 40;
	} else {
		bill = (50 * 30) + (100 * 40) + (units - 150) * 50;
	}

	printf("Electricity Bill: Rs. %d", bill);
	return 0;
}