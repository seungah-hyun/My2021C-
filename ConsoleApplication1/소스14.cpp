#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	int a;
	scanf("%d", &a);
	
	int y = a++;
	int x = ++a;
	printf("%d\n%d",y, x);

}