#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);

	int sum = a + b + c + d;
	int avg = sum / 4;
	printf("sum %d\navg %d", sum, avg);
}