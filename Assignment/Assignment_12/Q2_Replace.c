#include<stdio.h>
#include<string.h>

int main(){
	char str[20];
	
	printf("Enter a String: ");
	scanf("%s",str);
	
	for(int i = 0; str[i]!= '\0'; i++)
	{
		if(str[i] == 'a')
		str[i] = '$';
	}
	
	printf("Modified String = %s",str);
}