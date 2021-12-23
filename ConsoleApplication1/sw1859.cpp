#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
long long sum = 0;
int market[1000001];
int main()
{
	int tc, howmany,temp;
	int max = -1;	
	int result = 0;
		
	scanf("%d" , &tc);
	for(int i = 1; i <= tc; i++)
	{		
		
		sum = 0;
		max = -1;
		temp = 0;
		scanf("%d", &howmany);
		for (int j = 0; j < howmany; j++)
		{
			scanf("%d", &market[j]);
			if (max < market[j])
			{
				max = market[j];
				temp = j;				
			}			
		}
		
		for (int j = 0; j < howmany; j++)
		{
			if (market[j] > market[j + 1])
			{
				result = 0;
			}
			if (market[j] <= market[j + 1] && temp > j)
			{
				result = max - market[j];
			}
			if (temp < j && market[j] <= market[j + 1])
			{
				result = market[j + 1] - market[j];
			}
			sum +=  result;
		}

		printf("#%d %d\n", i,sum );
	}

	return 0;
}