#include<stdio.h>

void checkPerfect(int *n) {
	int i, sum = 0;

	for(i = 1; i <= *n/2; i++) {
		if(*n % i == 0)
			sum = sum + i;
	}
	if(sum == *n)
		printf("%d is Perfect", *n);
	else
		printf("%d is Not Perfect", *n);
}
int main() {
	int num;
	printf("Enter a Number: ");
	scanf("%d", &num);
	checkPerfect(&num);
	return 0;
}