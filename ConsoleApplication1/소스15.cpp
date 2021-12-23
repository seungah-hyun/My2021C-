#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int x = a++;
	int y = --b;
	int mul = x * y;
	printf("%d %d %d", x, y, mul);
}