#include<stdio.h>

void checkPalindrome(int *n) {
	int num = *n, rev = 0;

	while(num > 0) {
		rev = rev * 10 + num % 10;
		num = num / 10;
	}
	if(rev == *n)
		printf("%d is Palindrome", *n);
	else
		printf("%d is Not Palindrome", *n);
}
int main() {
	int num;
	printf("Enter a Number: ");
	scanf("%d", &num);
	checkPalindrome(&num);
	return 0;
}