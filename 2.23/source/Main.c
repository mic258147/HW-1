#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a, b, c, max, min;
	printf("請輸入3個數字");
	scanf_s("%d%d%d", &a, &b, &c);
	max = a;
	min = a;
	if (b > max)max = b;
	if (b < min)min = b;
	if (c > max)max = c;
	if (c < min)min = c;
	printf("largest=%d\n", max);
	printf("smallest=%d\n", min);


	system("pause");
	return 0;
}