#include<stdio.h>
#include<string.h>

int main() {
	char str[100];
	printf("Enter a String: ");
	gets(str);

	for(int i = 0; str[i] != '\0'; i++) {
		if(str[i] == ' ')
			str[i] = '$';
	}
	printf("New String: %s",str);
}
