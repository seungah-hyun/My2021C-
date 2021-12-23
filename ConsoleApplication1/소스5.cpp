#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int no1 = a * (b % 10);
	int no2 = (a) * ((b/10)%10);
	int no3 = (a) * (b / 100);
	int no4 = a * b;

	
	printf("%d\n", no1);
	printf("%d\n", no2);
	printf("%d\n", no3);
	printf("%d\n", no4);
	return 0;
}