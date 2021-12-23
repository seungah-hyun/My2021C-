#define _CRT_SECURE_NO_WARNINIGS
#include<stdio.h>

int main(void)
{

	double a;
	int b = 3;
	char c = 'a';
	scanf("%f", &a);

	printf("%f\n", a);
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(b));
	printf("%d\n", sizeof(c));
		return 0;

}