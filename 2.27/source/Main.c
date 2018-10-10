#include<stdlib.h>
#include<stdio.h>

int main()
{
	int a = 5;    /*¼h¼Æ*/
	int i, j;
	for (i = 1; i <= a; i++)
	{
		for (j = 0; j < a - i; j++)
			printf(" ");
		for (j = 0; j < i * 2 - 1; j++)
			printf("*");
		printf("\n");
	}
	system("pause");
	return 0;

}