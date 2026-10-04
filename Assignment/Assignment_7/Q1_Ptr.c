#include<stdio.h>

void printNumbers(int *n) {
	int i;

	for(i = 1; i <= *n; i++)
		printf("%d ", i);
}
int main() {
	int num;
	printf("Enter a Number: ");
	scanf("%d", &num);

	printNumbers(&num);
	return 0;
}

