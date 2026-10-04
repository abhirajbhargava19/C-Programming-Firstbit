#include<stdio.h>

void CheckPrime(int *num) {
	int status = 0;

	for(int i = 2; i <= *num/2; i++) {
		if(*num % i == 0) {
			status = 1;
			break;
		}
	}
	if(status == 0)
		printf("prime\n");
	else
		printf("not prime\n");
}
int main() {
	int n;
	printf("Enter Number: ");
	scanf("%d", &n);
	CheckPrime(&n);
	return 0;
}