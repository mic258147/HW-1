#include<stdlib.h>
#include<stdio.h>

int main()
{	
	int a,b,i, j;
	printf("number  square  cube\n");
	for (i = 0; i < 11; i++)
	{
		printf("%-8d", i);
		a = i * i;
		printf("%-8d", a);
		b = i * i * i;
		printf("%-8d\n",b);
	}
	system("pause");
	return 0;
}