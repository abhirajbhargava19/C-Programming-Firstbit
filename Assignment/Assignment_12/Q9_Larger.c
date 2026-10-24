#include<stdio.h>
#include<string.h>

int main() {
	char str1[100], str2[100];

	printf("Enter a String 1: ");
	scanf("%s",str1);

	printf("Enter a String 2: ");
	scanf("%s",str2);

	for(int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
		if(str1[i] > str2[i]) {
			printf("Larger String: %s",str1);
			return 0;
		}

		else if (str2[i] > str1[i]) {
			printf("Larger String: %s",str2);
			return 0;
		}
	}

}