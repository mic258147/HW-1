#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a, b;
	printf("�п�J��Ӿ��:");
	scanf_s("%d%d", &a,&b);
	if (a%b == 0)printf("The first integer is a multiple of the second\n");
	else printf("The first integer is not a multiple of the second\n");
	system("pause");
	return 0;
}