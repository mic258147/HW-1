#include <stdlib.h>
#include <stdio.h>

int main()
{
	float a, b, c,price;
	int d, e;
	printf("�п�J�@��Ѫ����{��(����):");
	scanf_s("%f", &a);
	printf("�п�J�T�o�@���ɪ�����:");
	scanf_s("%f", &b);
	printf("�п�J�T�o�@���ɯ��p�����{��(����):");
	scanf_s("%f", &c);
	printf("�п�J��Ѫ������O:");
	scanf_s("%d", &d);
	printf("�п�J��Ѫ��q��O(�L���O):");
	scanf_s("%d", &e);
	price = a / c * b + d + e;
	printf("��Ѷ}���Ҫ�O�����B��:%f", price);
	system("pause");
	return 0;
}