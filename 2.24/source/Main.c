#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a;
	printf("�п�J�@�Ӿ��:");
	scanf_s("%d", &a);
	if (a == 0)
	{
		printf("The integer is not Even or Odd\n");
		system("pause");
		return 0;
	}
	if (a%2 == 0)printf("The integer is Even\n");
	else printf("The integer is Odd\n");
	system("pause");
	return 0;
}