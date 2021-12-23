#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);

	int no1 = (a + b) % c;
	int no2 = ((a % c) + (b % c)) % c;
	int no3 = (a * b) % c;
	int no4 = ((a % c) * (b % c)) % c;

	printf("%d\n", no1);
	printf("%d\n", no2);
	printf("%d\n", no3);
	printf("%d\n", no4);

	return 0;
}