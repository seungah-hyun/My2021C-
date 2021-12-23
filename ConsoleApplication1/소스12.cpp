#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	int sum = a + b + c;

	int avg = sum / 3;

	printf("sum : %d\n", sum);

	printf("avg : %d", avg);

	return 0;


}