#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 3;
	int b = -3;
	int c = ~a + 1;

	printf("%x\n", a);
	printf("%x\n", b);
	printf("%d\n",a + b);
	printf("%d\n", c);
	
	return 0;


}