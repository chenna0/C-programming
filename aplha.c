#include <stdio.h>

int main(void) {
	char n;
	scanf("%c",&n);
	if((n>='a'&&n<='z')||(n>='A'&&n<='Z'))
	printf("alpha");
	else
	printf("no");
	return 0;
}
