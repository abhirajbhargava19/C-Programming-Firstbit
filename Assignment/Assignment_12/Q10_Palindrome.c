#include<stdio.h>

int main() {
	char str[100];
	int i, j, flag = 1;

	printf("Enter a String: ");
	scanf("%s", str);

	for(i = 0, j = 0; str[j] != '\0'; j++);
	j--;

	for(i = 0; i < j; i++) {
		if(str[i] != str[j]) {
			flag = 0;
			break;
		}
		j--;
	}
	if(flag)
		printf("Palindrome Number");
	else
		printf("Not a Palindrome");
	return 0;
}