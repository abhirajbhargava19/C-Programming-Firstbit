#include <stdio.h>
#include <string.h>

int main() {
	char a[100] = "hello";
	char b[100] = "world";
	char c[100];
	char *p;

	printf("1. Length = %lu\n", strlen(a));

	strcpy(c, a);
	printf("2. Copy = %s\n", c);

	strncpy(c, b, 3);
	c[3] = '\0';
	printf("3. N Copy = %s\n", c);

	strcpy(c, a);
	strcat(c, b);
	printf("4. Join = %s\n", c);

	strcpy(c, a);
	strncat(c, b, 3);
	printf("5. N Join = %s\n", c);

	printf("6. Compare = %d\n", strcmp(a, b));

	printf("7. N Compare = %d\n", strncmp(a, b, 2));

	p = strchr(a, 'l');
	printf("8. First l = %s\n", p);

	p = strrchr(a, 'l');
	printf("9. Last l = %s\n", p);

	p = strstr("hello world", "world");
	printf("10. Search = %s\n", p);

	printf("11. strspn = %lu\n",
	       strspn("abc123", "abc"));

	printf("12. strcspn = %lu\n",
	       strcspn("abc123", "123"));

	p = strpbrk("hello", "aeiou");
	printf("13. First vowel = %s\n", p);

	strcpy(c, "one,two");
	p = strtok(c, ",");
	printf("14. Token = %s\n", p);

	printf("15. Error = %s\n", strerror(2));

	printf("16. Compare = %d\n", strcoll("abc", "abc"));

	memcpy(c, a, strlen(a) + 1);
	printf("17. Memcpy = %s\n", c);

	memmove(c, b, strlen(b) + 1);
	printf("18. Memmove = %s\n", c);

	printf("19. Memcmp = %d\n", memcmp("abc", "abc", 3));

	memset(c, '*', 5);
	c[5] = '\0';
	printf("20. Memset = %s\n", c);

	p = (char *)memchr(a, 'l', strlen(a));
	printf("21. Memchr = %s\n", p);

	return 0;
}