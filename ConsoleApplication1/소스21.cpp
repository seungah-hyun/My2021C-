#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
#include<stdio.h>
#include<string.h>
#include<cstdio>
#include<stdlib.h>



#if 0
int main()
{
	int a = (3 >= 2) + 5;
	printf("%d", a);
	return = 0;
}

#endif
#if 0
int main()
{
	int a, b;
	scanf("%d %d",& a, &b);

	printf("%d\n", (a == b));
	printf("%d", (a != b));

}
#endif
#if 0
int main()
{
	int a = 3, b = 7;
	printf("%d %d\n", a, b);
	int temp = a;
	a = b;
	b = temp;
	printf("%d %d\n", a, b);
}

#endif

#if 0
int main()
{
	int a, b;
	int c, d;
	scanf("%d%d", &a, &b);
	scanf("%d%d", &c, &d);
	printf("%d", (a > c) && (b > d));
}
#endif

#if 0
//두 개의 숫자를 입력받아서 교환한 후 큰 숫자 출력

int main()
{
	int a, b;
	
	scanf("%d%d", &a, &b);
	int temp = a;
	a = b;
	b = temp;
	
	if (a > b)
		printf("%d", a);
	else if (b > a)
		printf("%d", b);


}
#endif
#if 0

int main()
{	
	int min=999;
	int max = -1;
	int arr[10];
	int dump;
	int temp1, temp2;

	scanf("%d", &dump);
	for (int i = 0; i <= 10; i++)
	{
		scanf("%d", &arr[i]);
		if (max < arr[i])
		{
			max = arr[i];
			temp1 = i;
		}
		if (min > arr[i])
		{
			min = arr[i];
			temp2 = i;
		}
		while (dump != -1)
		{
			dump = dump-1;
			arr[temp1] = max - 1;
			arr[temp2] = min + 1;
		}
	}
	printf("%d %d %d", max - min, max, min);
	


	return 0;
}


#endif
#if 0
int main()
{	
	int x;
	scanf("%d", & x);
	switch (x)
	{
		case 1:
			printf("%d",31);
			break;
		case 2:
			printf("%d", 28);
			break;
		case 3:
			printf("%d", 31);
			break;
		case 4:
			printf("%d", 30);
			break;
		case 5:
			printf("%d", 31);
			break;
		case 6:
			printf("%d", 30);
			break;
		case 7:
			printf("%d", 31);
			break;
		case 8:
			printf("%d", 31);
			break;
		case 9:
			printf("%d", 30);
			break;
		case 10:
			printf("%d", 31);
			break;
		case 11:
			printf("%d", 30);
			break;
		case 12:
			printf("%d", 31);
			break;
			
	}
}
#endif
#if 0
int main()
{
int a, b, c;
scanf("%d %d %d", &a, &b, &c);
int min = 0;
if (a > b)
{
	min = b;
	if (c > min)
		min = min;
	else
		min = c;
}
else
{
	min = a;
	if (c > min)
		min = min;
	else
		min = c;
}
printf("%d", min);

return 0;
}
#endif
#if 0
int main()
{
	int a;
	scanf("%d", &a);
	if (a % 400 == 0)
		printf("leap year");
	else if (a % 4 == 0 && a % 100 != 0)
		printf("leap year");
	else
		printf("common year");

	return 0;
}
#endif
#if 0
int main()
{
	int a;
	printf("Number? ");
	scanf("%d", &a);
	
	switch (a)
	{
	case 1:
		printf("dog");
		break;
	case 2:
		printf("cat");
		break;
	case 3:
		printf("chick");
		break;
	default:
		printf("I don't know.");
		break;
	}
	
	return 0;
}
#endif
#if 0
int main()
{
	int a = 1;
	while (a!=16)
	{
		printf("%d ",a);
		a++;
	}
	return 0;
}
#endif
#if 0
int main()
{
	int a=0;
	int b = 0;
	int  sum=0;
	double avg=0;
	while (a<100)
	{		
		scanf("%d", &a);
		sum = sum+a;
		b++;
	}
	avg = (double)sum / (double)b;
	printf("%d\n%.1f", sum, avg);
	return 0;
}
#endif
#if 0
int main()
{
	int a, b;
	
	 
	while (true)
	{		
		scanf("%d %d", &a, &b);
		int sum = a + b;
		if (sum == 0)
			break;
		if(sum!=0)
			printf("%d\n",sum);
		
	}
	return 0;
}
#endif
#if 0
int main()
{
	int num, Nnum, main, sub, temp;
	int	cnt = 0;
	scanf("%d", &num);
	main = num / 10;
	sub = num % 10;
	while (1)
	{
		temp = main + sub;
		if (temp >= 10)
			Nnum = sub * 10 + temp % 10;
		else
			Nnum = sub * 10 + temp;
		main = Nnum / 10;
		sub = Nnum % 10;

		cnt++;
		if (num == Nnum)
			break;
	}
	printf("%d", cnt);
	return 0;
}
#endif
#if 0 //삼각화단

int main()
{
	int  n;//c는 a+b>c이여야함 
	int cnt = 0;
	scanf("%d", &n);

	for(int a=1;a<n;a++)
		for (int b = a; a + b < n; b++)
		{
			int c = n - (a + b);
			if (c < b)break;
			if (  a + b > c&&a+b+c==n)
					cnt++;			
		}
	
	printf("%d", cnt);

	return 0;
}
#endif
#if 0
//정올 자가진단1 함수
void star()
{
	printf("~!@#$ ^ &*()_ + |\n");
}

int main()
{
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
		star();
	return 0;
}

#endif
#if 0
//자가진단2
double pi(int a)
{
	double circle;
	circle = (double)a * a * 3.14;

	
	return circle;
}
int main()
{
	
	int r;
	scanf("%d", &r);
	double circle;
	circle=pi(r);
	

	printf("%.2f", circle);
		return 0;
}
#endif
#if 0
//자가진단3
int arr[100][100];
void square(int a)
{
	int b = 1;
	for (int i=0; i < a; i++)
	{
		for(int j=0;j<=a;j++)
		{
			
			arr[i][j] = b;
			b++;
			
			if (j == a)
				printf("\n");
			else
				printf("%d ", arr[i][j]);
			 
		}
		b--;
	}
}
int main()
{
	
	int n;
	scanf("%d", &n);
	
	square(n);
	

	return 0;
}
#endif
#if 0
//자가진단4
int max;
int getMax(int a,int b,int c)
{
	if (a > b)
	{
		max = a;
		if (max > c)
			return max;
		else
			return c;
	}
	else
	{
		max = b;
		if (max > c)
			return max;
		else
			return c;
	}
}
int main()
{	
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	getMax(a,b,c);
	int max = getMax(a,b,c);
	printf("%d",max);
	return 0;

}
#endif
#if 0
//자가진단5
int result;
int Multiple(int a,int b)
{
	int one = 1;
	for (int i = 0; i < b; i++)
		one *= a;
	return one;
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	Multiple(a,b);
	result = Multiple(a, b);
	printf("%d", result);
	return 0;
}

#endif
#if 0
int main() {
	int n;
	char arr = [100][100];
	scanf("%d", &n);
	for (int tc = 1; tc <= n; tc++)
	{
		for()
		
	}

}
#endif
#if 0 
//중간고사 1
int main()
{
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= 10 ;i++)
		printf("%d ", i*a);

	return 0;
}
#endif
#if 0
//중간고사2
int main()
{
	int arr[5];
	int  sum=0;
	int max = -1;
	int max2 = -1;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] < 0)
		{
			arr[i] = -arr[i];
			
		}

		if (arr[i] % 2 != 0)
		{
			sum = sum + arr[i];
		}		
	}
	for (int i = 0; i < 5; i++)
	{
		if (max < arr[i])
		{
			max2 = max;
			max = arr[i];			
		}
		else if (max > arr[i] && max2 < arr[i])
			max2 = arr[i];
	}
	printf("%d %d", sum, max2);
	
	
	

	return 0;
}
#endif
#if 0
int main()
{
	char arr[5];
	
	int sum=0;
	
	for (int i = 0; i <5; i++)
	{
		scanf("%c", &arr[i]);		
	}
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] == 'A')
			sum = sum + 1;		
		else if (arr[i] == 'B')
			sum = sum + 5;
		else if (arr[i] == 'C')
			sum = sum + 10;
		else if (arr[i] == 'D')
			sum = sum + 50;
	}
	printf("%d", sum);
	return 0;
}
#endif
#if 0
void star(int a,int b)
{
	int temp = 0;
	if (a > b)
	{
		temp=a;//temp=5
		a = a ^ b; //a=7
		b = temp;//b=5
		a = a ^ temp;//2;
		for (int i = a; i <= b; i++)
			printf("%d", i);
	}
	else if (a < b)
	{
		for (int i = a; i <= b; i++)
			printf("%d", i);
	}
}
int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	star(a, b);

	return 0;
}
#endif
#if 0
void star(int a,int b)
{
	if (a > b)
		SWAP(a, b);
	for (int i = a; i <= b; i++) {
		printf("%d ", i);
	}
}


int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	star(a, b);
	return 0;
}
#endif
#if 0

int scanf() {
	char num;
	printf("입력: ");
	scanf(" %c", &num);
	if (num == 's') return 0;
	else return num - 48;
}
void printf(int num) {
	int i, j, k;
	for (i = 0; i < num; i++) {
		for (j = 0; j < num - i; j++) {
			printf(" ");
		}
		for (k = 0; k < 2 * i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
}

int main() {
	int num;
	int i, j, k;
	do {
		if (num = scanf()) {
			printf(num);
		}
	} while (num != 0);

}

#endif
#if 0
int main()
{
	double arr[6]= { 85.6, 79.5 ,83.1, 80.0 ,78.2 ,75.0 };	
	int a, b;
	double sum = 0;

	scanf("%d %d", &a, &b);
	for (int i = 0; i < sizeof(arr); i++)
	{
		sum = arr[a - 1] + arr[b - 1];
	}
	printf("%.1f", sum);
	return 0;
}
#endif
#if 0
int main()
{
	char arr[10];
	for (int i = 0; i < sizeof(arr); i++)
	{
		scanf("%c ", &arr[i]);
	}
	printf("%c %c %c", arr[0], arr[3], arr[6]);
	return 0;
}
#endif
#if 0
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
}
#endif
#if 0
int Data[3][3];

int main()
{	
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x<3; x++)
		{
			scanf("%d ", &Data[y][x]);
		}
	}

	return 0;
}
#endif
#if 0
int arr[10];
int main()
{
	int min = 10000;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	printf("%d", min);
	return 0;
}
#endif
#if 0
int arr[10];
int main()
{
	int max = -1;
	int min = 10000;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);		
	}
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] <100)
		{
			if (arr[i] > max)
				max = arr[i];
		}
		if (arr[i] >= 100)
		{
			if (arr[i] < min)
				min = arr[i];
		}		
	}
	if (max == -1)
		max = 100;
	if (min == 10000)
		min = 100;
	printf("%d %d",max,min);
	return 0;
}
#endif
#if 0
int arr[10];

int main()
{
	int max = -1;
	int temp;
	for (int i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < 10; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			temp = i;
		}
		for (int j = 0; j < 10; j++)
		{

		}
	}
	for (int i = 0; i < 10; i++)
		printf("%d", arr[i]);


	return 0;
}
#endif
#if 0
int i, j, min, index, temp;
int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };
int main()
{
	for (i = 0; i < 10; i++)
	{
		min = 9999;
		for (j = i; j < 10; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				index = j;
			}
		}
		
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	return 0;
}

#endif
#if 0
int main() {
	int temp, index;
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		int max = -1;
		for (int j = 0; j < 9; j++)
		{
			if (arr[j] < arr[j + 1])
			{

				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	return 0;
}
#endif

#if 0
int arr[5][5];
int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };
int newY, newX;
int sum=0;
bool isSafe(int y,int x) 
{
	return y >= 0 && y < 5 && x < 5 && x >= 0;
}
int myAbs(int a,int b) 
{
	return(a - b) > 0 ? a - b : b - a;
}
int main()
{
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			scanf("%d ", &arr[y][x]);
		}
	}

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			for (int dir = 0; dir < 4; dir++)
			{
				newY = y + dy[dir];
				newX = x + dx[dir];
				if (isSafe(newX,newY))
				{
					sum += myAbs(arr[y][x],arr[newY][newX]);
				}
			}
		}
	}

	printf("%d", sum);
	return 0;
}

#endif
#if 0

int get_min(int arr[5][5])
{
	int minY=0, minX=0;
	int min = arr[0][0];

	for(int y=0;y<5;y++)
		for (int x = 0; x < 5; x++)
		{
			if (min > arr[y][x])
			{
				min = arr[y][x];
				minY = y;
				minX = x;
			}
		}
	arr[minY][minX] = 99;
	return min;
}

int main()
{
	int arr[5][5] = { {9,20,2,18,11},{19,1,25,3,21},{8,24,10,17,7}
		,{15,4,16,5,6},{12,13,22,14} };

	int sorted_arr[5][5] = {0};
	int min = 100;
	int dy[4] = { 0,1,0,-1 };
	int dx[4] = { 1,0,-1,0, };

	int dir = 0;
	int newY = 0, newX = 0;
	for (int i = 0; i < 25; i++)
	{
		
		int y = newY, x = newX;
		sorted_arr[y][x] = get_min(arr);

		int newY = y + dy[dir];
		int newX = x + dx[dir];

		if (newY > 4 || newX > 4)
		{
			dir = (dir + 1) % 4;
			newY = y + dy[dir];
			newX = x + dx[dir];
		}
	}
	for (int y = 0; y < 5; y++)
		for (int x = 0; x < 5; x++)
			sorted_arr[y][x] = get_min(arr);
	
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
			printf("%3d ",sorted_arr[y][x]);
		printf("\n");
	}
	return 0;
}
#endif
#if 0
int main()
{
	int arr[5][5] ;

	for (int i = 0; i < 5; i++)
	{
		arr[0][i] = 1;
		arr[i][0] = 1;
	}
	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			
			arr[i][j] = arr[i-1][j] + arr[i][j - 1];
			
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			
			if (j != 4)
				printf("%d ", arr[i][j]);
			else if (j == 4)
				printf("%d \n",arr[i][j]);
		}
	}
	
	return 0;

}
#endif
#if 0
int main()
{
	int arr[5][4];
	int sum, avg;
	int cnt = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < 5; i++)
	{
		sum = 0;
		avg = 0;
		for (int j = 0; j < 4; j++)
		{
			sum += arr[i][j];
			avg = sum / 4;
			
		}
		if (avg >= 80)
		{
			printf("pass\n");
			cnt++;
		}
		else if (avg < 80)
			printf("fail\n");
	}
	printf("Successful : %d", cnt);

	return 0;
}
#endif
#if 0
int main()
{
	int arr1[2][3];
	int arr2[2][3];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr1[i][j]);
			
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	printf("first array\nsecond array\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ",arr1[i][j] * arr2[i][j]);
		}
		printf("\n");
	}

	return 0;
}
#endif
#if 0
int main()
{
	char arr[3][5], arr2[3][5];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			scanf("%c ", &arr[i][j]);
			arr2[i][j] = arr[i][j] + 32;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%c ", arr2[i][j]);
		}
		printf("\n");
	}

	return 0;
}
#endif
#if 0
int main()
{
	int i; int *p;
	scanf("%d", &i);
	p = &i;
	printf("%#p %d", p, *p);
	

}
#endif
#if 0
int main()
{
	int i; int* p;
	scanf("%d", &i);

	p = &i;

	printf("%d...%d", *p / 10, *p % 10);

	return 0;
}
#endif
#if 0
int main()
{
	int a[5] = { 0, };
	int* p=a;
	int i;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	
		for (i = 0; i < 5; i++)
			if(i%2==0)
				printf("%d ", *(p + i));
	
	return 0;
}
#endif
#if 0
int main()
{
	int a, b;
	int* pa, * pb;
	scanf("%d %d", &a, &b);

	pa = &a;
	pb = &b;
	printf("%d + %d = %d\n",*pa,*pb,*pa+*pb);
	printf("%d - %d = %d\n", *pa, *pb, *pa - *pb);
	printf("%d * %d = %d\n", *pa, *pb, *pa * *pb);
	printf("%d / %d = %d\n", *pa, *pb, *pa / *pb);


	return 0;

}
#endif
#if 0
int main()
{
	double a[5];
	double *p=a;

	for (int i = 0; i < 5; i++)
		scanf("%lf ", p+i);

	for (int i = 0; i < 5; i++)
		printf("%.1f ",*(p+i));
			
		return 0;

}
#endif
#if 0
int main()
{
int a[10];
int b[10];
int * pa = a;
int * pb = b;

for (int i = 0; i < 10; i++)
	scanf("%d \n", pa+i);

for (int i = 0; i < 10; i++)
	scanf("%d \n", pb+i);


for (int i = 0; i < 10; i++)
	printf("%d ", * (pa+i)+*(pb+i));


return 0;
}
#endif
#if 0
int main()
{
	int a[5];
	int b[5];
	for (int i = 0; i < 5; i++)
		scanf("%d\n", &a[i]);

	int* p = a;
	for (int i = 0; i < 5; i++)	
		b[i] = *(p + i);

	for (int i = 0; i < 5; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", b[i]);
	}

	return 0;
}
#endif
#if 0
void sub(int* b, int where)
{	
		printf("%d", *(b+where-1));	
}
int main()
{
	int a[5];
	int n;
	for (int i = 0; i < 5; i++)
		scanf("%d", &a[i]);

	scanf("\n%d", &n);

	sub(a,n);

	return 0;

}

#endif
#if 0
int main()
{
	char a[100];
	int i;
	scanf("%s",a);

	printf("%s%s", a, a);
	
	return 0;
}
#endif
#if 0
int main()
{
	char a[100];
	int n;

	scanf("%s", a);
	scanf("%d", &n);

	if (strlen(a) > n)
	{
		for (int i = strlen(a)-1; i >=strlen(a)-n ;i--)
		{
			printf("%c", a[i]);
		}
	}

	else
	{
		for (int i = strlen(a) - 1; i >= 0; i--)
			printf("%c", a[i]);
	}
	return 0;
}
#endif
#if 0
int main()
{
	char a[20];
	char b[20];
	scanf("%s", a);
	scanf("%s", b);

	printf("%d", strlen(a) + strlen(b));
}
#endif
#if 0
int main()
{
	char a[100];
	
	scanf("%s", a);
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
			printf("%c",a[i]);
		else if(a[i] >= 'a' && a[i] <= 'z')
			printf("%c", a[i]-32);
	}
	return 0;
}
#endif
#if 0
int main()
{
	char a[100];
	int i, len,cnt,j;
	scanf("%s", a);
	len = strlen(a);

	for (i = len - 1; i >= 0; i--)
	{
		cnt = 0;
		j = i;
		while (cnt < len)
		{
			printf("%c", a[j++]);
			if (j == len)
				j = 0;
			cnt++;
		}
		printf("\n");
	}

	return 0;

}
#endif
#if 0
long long sum(int *p, int n)
{
	long long add = 0;
	for (int i = 0; i < n; i++)
		add += p[i];

	return add;
}

int main()
{
	int a[1000000];
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	long long add = sum(a, n);

	printf("%lld",add);

	return 0;
}

#endif
#if 0
void sub(int *p,int n,int len)
{
	for (int i = 0; i < len; i++)
	{
		if (*(p + i) < n)
		{
			printf("%d ", *(p + i));
		}
	}
}
int main()
{
	int x, n;
	scanf("%d %d", &x, &n);

	int arr[10000];
	for (int i = 0; i < x; i++)
		scanf("%d", &arr[i]);

	sub(arr, n,x);

	return 0;
}
#endif
#if 0
void sub(int *p)
{
	int max = -1;
	int index = 0;
	for (int i = 0; i < 9; i++)
	{
		if (max < *(p + i))
		{
			max = *(p + i);
			index = i;
		}

	}
	printf("%d\n%d", max, index + 1);
}
int main()
{
	int arr[9];
	int n;
	for (int i = 0; i < 9; i++)
		scanf("%d", &arr[i]);

	sub(arr);
}
#endif
#if 0
int main()
{// strcpy
	char str1[10] = "Hello";
	char str2[10] = "";

	printf("%s %s\n", str1, str2);

	strcpy(str2, str1);
	printf("String copy %s %s \n", str1, str2);
//strlen
	int length = strlen(str2);
	printf("String length %s %d\n", str2, length);

	int res,res2,res3;

// strcmp는 문자열중 알파벳이 앞과 뒤를 비교했을때 앞이 먼저나오는 거면 -1 아니면 +1 이나온다.
// 같은 문자일 경우 0이 나온다.
	res = strcmp("apple","banana");
	res2 = strcmp("love","lov");
	res3 = strcmp("pear","pear");
	printf("res : %d\nres2 : %d\nres3 : %d",res,res2,res3);

// atoi
	int i = atoi("123");
	printf("%d\n", i);

// itoa	#pragma warning(disable : 4996)이것을 사용해야 하더라구여
	int j = 15;
	char buf[20] = {0};
	itoa(j, buf, 10);
	printf("%s\n", buf);
	itoa(j, buf, 16);
	printf("%s\n", buf);
	itoa(j, buf, 14);
	printf("%s\n", buf);
	itoa(j, buf, 8);
	printf("%s\n", buf);
	itoa(j, buf, 7);
	printf("%s\n", buf);
// 숫자 중 첫번째가 몫 두번째가 나머지 입니다.

//gets()는 아에 안되는데 뭘 연습하라고 하신지 모르겠네요
//찾아봐서 fgets() 사용했습니다.
	char a[10] = "";
	
	printf("문자열을 입력하세요");
	fgets(a,sizeof(a),stdin);
	printf("a==>%s\n",a);

	printf("문자열을 입력하세요");
	gets_s(a);
	printf("a==>%s\n", a);
	
	return 0;
}
#endif
#if 0
struct school
{
	char name[20];
	char scName[20];
	int grade;
};

int main()
{
	struct school s;
	char name[20];
	char scName[20];
	int grade;
	scanf("%s",name);
	scanf("%s", scName);
	scanf("%d", &grade);

	strcpy(s.name, name);
	strcpy(s.scName, scName);
	s.grade = grade;

	printf("Name : %s\nSchool : %s\nGrade : %d", s.name, s.scName, s.grade);
	return 0;
	
}
#endif
#if 0
struct school {
	char scName2[20];
	int grade2;
	
};
int main()
{
	char scName[20] = "Jejuelementary";
	int grade = 6;
	struct school s;
	char scName2[20];
	int grade2;
	scanf("%s", scName2);
	scanf("%d", &grade2);

	strcpy(s.scName2, scName2);
	s.grade2 = grade2;
	printf("%d grade in %s School\n", grade, scName);
	printf("%d grade in %s School\n", s.grade2, s.scName2);

	return 0;
}
#endif
#if 0
typedef struct point
{
	int x, y=0;
}p;
int main()
{
	p p1, p2, p3;
	int x1, x2, x3;
	int y1, y2, y3;
	scanf("%d %d %d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y, &p3.x, &p3.y);

	p1.x = x1;
	p1.y = y1;
	p2.x = x2;
	p2.y = y2;
	p3.x = x3;
	p3.y = y3;

	printf("(%.1f, %.1f)", (double)(p1.x + p2.x + p3.x) / 3, (double)(p1.y + p2.y + p3.y) / 3);
	
	return 0;
}
#endif
#if 0
typedef struct point {
	char name[20];
	int H, E;
}p;
int main()
{
	p p1[2];
	char name[20];
	int H, E;
	for (int i = 0; i < 2; i++)
		scanf("%s %d %d", p1[i].name, &p1[i].H, &p1[i].E);

	for (int i = 0; i <2; i++)
		printf("%s %d %d\n", p1[i].name, p1[i].H, p1[i].E);

	int avg1= (p1[0].H + p1[1].H)/2;
	int avg2= (p1[0].E + p1[1].E)/2;

	printf("avg %d %d", avg1, avg2);

	return 0;
}
#endif
#if 0
typedef struct point{
	char name[20];
	int tall;
}p;
int main()
{
	p p1[5];
	for (int i = 0; i < 5; i++)
	{
		scanf("%s %d", p1[i].name, &p1[i].tall);
	}
	int min = 999;
	for (int i = 0; i < 5; i++)
		if (p1[i].tall < min)
			min = p1[i].tall;
	for (int i = 0; i < 5; i++)
		if (min == p1[i].tall)
			printf("%s %d", p1[i].name, p1[i].tall);
	return 0;
}
#endif
#if 0
struct date {
	int year, month, day;
};
struct student {
	int number;
	char name[10];

	struct date dob;
	double grade;
};

int main()
{
	struct student s1;
	s1.dob.year = 1983;
	s1.dob.month= 03;
	s1.dob.day = 29;
}
#endif
#if 0
struct point {
	int x;
	int y;

};

struct rect {
	struct point p1;
	struct point p2;
};

int main(void)
{
	struct rect r;
	int w, h, area, peri;

	printf("왼쪽 상단의 좌표를 입력하시오: ");
	scanf("%d %d", &r.p1.x, &r.p1.y);

	printf("오른쪽 상단의 좌표를 입력하시오: ");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	w = r.p2.x - r.p1.x;
	h = r.p2.x - r.p1.x;

	area = w * h;
	peri = 2 * w + 2 * h;
	printf("면적은 %d이고 둘레는 %d입니다.\n", area, peri);

	return 0;
}

#endif
#if 0
//12/01 제출할거
struct point {
	int x, y;

};
struct where {
	struct point p1;
	struct point p2;
};
int main()
{
	struct where r;
	
	printf("왼쪽 상단의 좌표를 입력하시오: ");
	scanf("%d %d", &r.p1.x, &r.p1.y);

	printf("오른쪽 상단의 좌표를 입력하시오: ");
	scanf("%d %d", &r.p2.x, &r.p2.y);
	
	if (r.p1.x == r.p2.x && r.p1.y == r.p2.y)
		printf("%d", 1);
	else
		printf("%d", 0);
		

	return 0;
}
#endif
#if 0
struct point {
	int x, y;

};

int quadrant(struct point p)
{

	if (p.x>0&&p.y>0)
		return 1;
	else if (p.x < 0 && p.y > 0)
		return 2;
	else if (p.x < 0 && p.y < 0)
		return 3;
	else if (p.x > 0 && p.y < 0)
		return 4;
}

int main()
{
	struct point p;

	printf(" 좌표를 입력하시오: ");
	scanf("%d %d", &p.x, &p.y);
	

	printf("%d 사분면 입니다.", quadrant(p));

	return 0;
}
#endif
#if 0
struct point {
	int x, y;

};
int quadrant(struct point *p)
{

	if (p->x > 0 && p->y > 0)
		return 1;
	else if (p->x < 0 && p->y > 0)
		return 2;
	else if (p->x < 0 && p->y < 0)
		return 3;
	else if (p->x > 0 && p->y < 0)
		return 4;
}
int main()
{
	struct point s;

	printf(" 좌표를 입력하시오: ");
	scanf("%d %d", &s.x, &s.y);
	
	struct point *p;
	p = &s;

	printf("%d 사분면 입니다.", quadrant(&s));

	return 0;
}

#endif
#if 0
int main()
{
	long long int n = 0;
	scanf("%lld", &n);
	long long int max = -1000001;
	long long int min =  1000001;
	long long int* p;
	p = (long long int *)malloc(n * sizeof(long long int));
	if (p == NULL)
	{
		printf("동적 메모리 할당오류\n");
		exit(1);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &*(p + i));
	}
	
	for (int i = 0; i < n; i++)
	{
		if (max < *(p + i))
			max = *(p + i);

		if (min > *(p + i))
			min = *(p + i);
	}
	printf("%lld %lld", min, max);

	free(p);
	return 0;
}
#endif
#if 0
void merge(int *a,int *b,int *c,int size)
{
	int wa, wb, wc;
	for( wa = 0,  wb = 0,  wc = 0; wa < size && wb < size;)
	{
		if (a[wa] < b[wb])
			c[wc++] = a[wa++];
		else
			c[wc++] = b[wb++];
	}
	for (int now = wa; wa < size; wa++)
		c[wc++] = a[now++];
	for (int now = wb; wb < size; wb++)
		c[wc++] = b[now++];
	
}
void print(char name,int *c,int size)
{
	printf("%c", name);
	for (int i = 0; i < size; i++)
		printf("%d", c[i]);
}
int main()
{
	int a[] = { 1, 2, 3, 4};
	int b[] = { 5, 6, 7, 8};
	int howmany = sizeof(a)/sizeof(a[0]);
	int c[8];
	
	merge(a, b, c,howmany);
	
	print('c', c, howmany*2);

	return 0;
}
#endif
#if 0
void myMerge(int* A, int* B, int* C, int size)
{
	int wa, wb, wc;

	for (wa = 0, wb = 0, wc = 0; wa < size && wb < size;)
	{
		if (A[wa] < B[wb])
			C[wc++] = A[wa++];
		else
			C[wc++] = B[wb++];
	}
	//wa = 4, wb = 0, wc = 4
	for (int now = wa; wa < size; wa++)
		C[wc++] = A[now++];
	for (int now = wb; wb < size; wb++)
		C[wc++] = B[now++];
}

void print_All(char name, int* C, int size)
{
	printf("%c ", name);
	for (int i = 0; i < size; i++)
		printf("%d", C[i]);
}

int main()
{

	int A[] = { 1,2,3,4 };
	int B[] = { 5,6,7,8 };

	int howmany = sizeof(A) / sizeof(A[0]);
	int C[8];

	myMerge(A, B, C, howmany);

	print_All('C', C, howmany * 2);

	return 0;
}

#endif
#if 0
struct food {
	char name[100];
	int cal;
};
int main()
{
	struct food FA[3] = { {"햄버거",1000}, {"콜라",500},{"감자튀김",2000} };

	int sum=0;
	for (int i = 0; i < 3; i++)
		printf("%s %d\n", FA[i].name, FA[i].cal);


	for (int i = 0; i < 3; i++)
	{
		sum += FA[i].cal;
	}
	printf("%d", sum);
	return 0;
}
#endif
#if 0
int main()
{
	int n;
	scanf("%d", &n);	
	double arr[] = {0,};
	double* p;	
	arr[n];
	p = arr;
	double sum = 0;
	double avg = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &arr[i]);
	}
	
	for (int i = 0; i < n; i++)
	{
		
		sum+= *(p + i);
		avg = sum / n;
	}
	
	for (int i = 0; i < 4; i++)
	{
		printf("%.2f", *(p + i));
	}
	printf("\nhap : %.2f\n", sum);
	printf("\navg : %.2f", avg);
}
#endif
#if 0
struct student {
	char name[50];
	int age;
};
void showMe(struct student s)
{
	printf("이름: %s\n", s.name);
	printf("나이: %d", s.age);
}
int main() {
	struct student s1;
	printf("이름을 입력하시오 : ");
	scanf("%[^\n]%*c", s1.name);  // 참고 scanf로 공백을 포함한 문자열 읽는 방법
	printf("나이를 입력하시오 : ");
	scanf("%d", &s1.age);
	showMe(s1);
	return 0;
}
#endif
#if 0
void swap(long long int n,long long int temp)
{
	int arr[10];
	int arr2[10];
	int count = 0;
	int max = -1;
	int maxi = 0;
	int mini = 0;
	int min = 10;
	long long int box = temp;
	while (true)
	{
		if (n / 10 != 0)
		{
			n = n / 10;
			count++;
			if (n / 10 == 0)
			{
				count++;
				break;
			}
		}
	}
	for (int i = 0; i < count; i++)
	{		
		arr[i] = temp%10;
		temp = temp / 10;
	}
	for (int i = count - 1; i >= 0; i--)
	{
		if (max < arr[i])
		{
			max = arr[i];
			maxi = i;
		}
		if (min > arr[i])
		{
			min = arr[i];
			mini = i;
		}
		
	}
	arr[maxi] = min;
	arr[mini] = max;

	n = arr[count - 1];
	for (int i = count - 2; i >=0; i--)
		n = n*10+arr[i];
	
	for (int i = 0; i < count; i++)
		temp = temp * 10 + arr[i];

	int min3 = 10;
	int min3i = 0;
	int min2 = 10;
	int min2i = 0;
	if (temp > n)
	{
		
		for (int i = 0; i < count; i++)
		{
			arr2[i] = box % 10;
			box = box / 10;
		}

		for (int i = 0; i < count; i++)
		{
			if (min2 > arr2[i] )
			{
				min3 = min2;
				min2 = arr2[i];
				min2i = i;											
			}
		}
		for (int i = 0; i < count; i++)
		{
			if (min3 > arr2[i] && arr2[i] != min2)
			{				
				min3 = arr2[i];
				min3i = i;
			}
		}
		
		arr2[min3i] = min2;
		arr2[min2i] = min3;
		for (int i = count - 1; i >= 0; i--)
			printf("%d\n", arr2[i]);
		box = 0;
		for (int i = count-1; i >=0; i--)
		{
			box = box * 10 + arr2[i];			
		}
		printf("\n%lld ", box);
	}
	else
		printf("\n%lld ", n);
	
	
}
int main()
{
	long long int n;
	
	scanf("%lld", &n);
; long long int temp=n;


swap(n,temp);

	return 0;
}
#endif
#if 1
int main()
{
	char a[11] = "Impossible";
	
	char* p;

	int b, c;
	p = (char*)malloc(14 * sizeof(char));
	if(p==NULL)
	{
		printf("동적 메모리 할당오류\n");
		exit(1);
	}
	for (int i = 0; i < 14; i++)
	{
		if (*(p + i) == 'I')
		{
			b = *(p + i);
			p +b = " ";
		}

	}

	free(p);
	return 0;
}
#endif
