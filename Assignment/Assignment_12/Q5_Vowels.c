#include<stdio.h>
#include<string.h>

int main() {
	char str[100];
	int count = 0;

	printf("Enter a String: ");
	scanf("%s",str);

	for(int i = 0; str[i] != '\0'; i++)
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			count++;
		}
		printf("Number of Vowels: %d",count);
}
