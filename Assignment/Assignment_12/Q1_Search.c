#include<stdio.h>
#include<string.h>

int main() {
	char str[100],ch;
	int found = 0;

	printf("Enter a String: ");
	scanf("%s",str);

	printf("Enter a character to search: ");
	scanf(" %c",&ch);

	for(int i = 0; i<strlen(str); i++) {
		if(str[i] == ch) {
			found = 1;
			break;
		}
	}
	if(found == 1)
		printf("Character found in the string");
	else
		printf("Character not found in the string");

	return 0;
}