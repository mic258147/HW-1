#include <stdlib.h>
#include <stdio.h>

int main()
{
	float a, b, c,price;
	int d, e;
	printf("請輸入一整天的里程數(公里):");
	scanf_s("%f", &a);
	printf("請輸入汽油一公升的價錢:");
	scanf_s("%f", &b);
	printf("請輸入汽油一公升能行駛的里程數(公里):");
	scanf_s("%f", &c);
	printf("請輸入當天的停車費:");
	scanf_s("%d", &d);
	printf("請輸入當天的通行費(過路費):");
	scanf_s("%d", &e);
	price = a / c * b + d + e;
	printf("當天開車所花費的金額為:%f", price);
	system("pause");
	return 0;
}