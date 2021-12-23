#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[100];	
	int dump;
	int where1, where2;	
	int result;

	for (int i = 1; i <= 10; i++)
	{	
				
		scanf("%d", &dump);
		 
			for (int d = 0; d < 100; d++)
			{
				scanf("%d", &arr[d]);
			}			
			for (int k = 0; k < dump; k++)

			{
				int max = -1;
				int min = 101;
				for (int j = 0; j < 100; j++)
				{
					if (max < arr[j])
					{
						max = arr[j];
						where1 = j;
					}
					if (min > arr[j])
					{
						min = arr[j];
						where2 = j;
					}

				}
				arr[where1]--;
				arr[where2]++;
			}
				
				int max = -1;
				int min = 101;
				for (int j = 0; j < 100; j++)
				{
					if (max < arr[j])
						max = arr[j];
					if (min > arr[j])
						min = arr[j];
				}
			
			
			result = max - min;
			printf("# %d %d\n",i, result);
	}		
	return 0;
}