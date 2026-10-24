#include<stdio.h>

int main() {
	char str[100];
	int i, j = 0;

	printf("Enter a String: ");
	scanf("%s", str);

	for(i = 0; str[i] != '\0'; i++) {
	 if(i % 2 == 0) {
			str[j] = str[i];
			j++;
		}
	}
	str[j] = '\0';
printf("New String: %s", str);
	return 0;
}