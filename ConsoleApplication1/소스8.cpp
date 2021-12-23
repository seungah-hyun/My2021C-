#include <stdio.h>

int main()
{
	float yd = 91.44;
	float in = 2.54;
	float a = 2.1;
	float b = 10.5;
	float n1 = yd * 2.1;
	float n2 = in*10.5;
	

	printf("%4.1fyd = %5.1fcm\n", a, n1);
	printf("%4.1fin = %5.1fcm\n", b, n2);

	return 0;

	
}
