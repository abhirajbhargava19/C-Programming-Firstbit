#include<stdio.h>
#include<string.h>

int main() {
	char str[100];
	int count = 1;

	printf("Enter a String: ");
	gets(str);

	for(int i = 0; str[i] != '\0'; i++) {
		if(str[i] == ' ')
			count++;
	}

	printf("Number of Words: %d", count);
	return 0;
}