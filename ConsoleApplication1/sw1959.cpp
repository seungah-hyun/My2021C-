#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int A[20];
int B[20];
int Box[20];
long long max;
int main()
{
	int gap;
	int sum;
	int T;
	scanf("%d", &T);
	for (int tc = 1; tc <= T; tc++)
	{
		int a, b;
		max = -10000;
		scanf("%d %d", &a, &b);
		for (int i = 0; i < a; i++)
			scanf("%d", &A[i]);

		for (int i = 0; i < b; i++)
			scanf("%d", &B[i]);

		if (a > b)
		{
			gap = a - b;
			for (int i = 0; i < b; i++)
			{
				sum += B[i] * A[i];
			}
		}
		else
		{
			gap = b - a;
			
		}

		printf("# %d %d", tc, max);
		
	}
	return 0;
}