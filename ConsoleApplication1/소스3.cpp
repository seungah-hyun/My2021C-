#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()

{
	int a, b;
	scanf("%d%d", &a, &b);

	int sum = a + b;
	int mi = a - b;
	int mul = a * b;
	int re = a / b;
	int rm = a % b;
	printf("%d\n",sum);
	printf("%d\n",mi);
	printf("%d\n",mul);
	printf("%d\n",re);
	printf("%d\n", rm);

	return 0;
	

}