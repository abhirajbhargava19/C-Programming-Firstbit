#include<stdio.h>
#include<string.h>

int main() {
	char str[100], temp;

	printf("Enter a String: ");
	scanf("%s",str);

	temp = str[0];
	str[0] = str[strlen(str)-1];
	str[strlen(str) - 1] = temp;

	printf("New String: %s",str);
}