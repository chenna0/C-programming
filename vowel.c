#include <stdio.h>

int main(void) {
	char n;
	scanf("%c",&n);
	if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
	printf("vowel");
	else if(n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
	printf("vowel");
	else if(n=='@'||n=='!'||n=='#'||n=='$'||n=='%'||n=='^'||n=='&'||n=='*')
	printf("invalid");
	else
	printf("Consonant");
	return 0;
}
