#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a;
	int len, wordlen;
	int howmany;
	int cnt,cnt2;
	
	scanf("%d", &a);
	for (int tc = 1; tc <= a; tc++)
	{
		len = 0;
		wordlen = 0;
		howmany = 0;
		cnt = 0;
		cnt2 = 0;
		int arr[15][15];
		scanf("%d %d", &len, &wordlen);
		
		for (int i = 0; i < len; i++)
		{
			for (int j = 0; j < len; j++)
			{
				scanf("%d", &arr[j][i]);
			}
		}

		for (int i = 0; i < len; i++)
		{
			cnt = 0;
			for (int j = 0; j < len; j++)
			{
				if (arr[j][i] == 1)
				{
					cnt += 1;
				}
				else
				{
					if (cnt == wordlen)
						cnt2 += 1;
					cnt = 0;
				}
			}
			if (cnt == wordlen)
				cnt2 += 1;
		}
			for (int i = 0; i < len; i++)
			{
				cnt = 0;
				for (int j = 0; j < len; j++)
				{
					if (arr[i][j] == 1)
					{
						cnt += 1;
					}
					else
					{
						if (cnt == wordlen)
							cnt2 += 1;
						cnt = 0;
					}
				}
				if (cnt == wordlen)
					cnt2 += 1;
			}
		printf("#%d %d\n", tc, cnt2);
	}
	return 0;
}