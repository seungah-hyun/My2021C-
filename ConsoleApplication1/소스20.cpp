#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	long long saving;
	long long property;
	scanf("%lld", &saving);
	property = saving * 12 * 30;

	printf("%lld", property);

	return 0;
}