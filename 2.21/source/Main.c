#include<stdlib.h> 
#include<stdio.h> 
int main()
{
	int a, b, i, j;
	a = 9;                                    /*��*/
	b = 9;                                    /*�e*/
	for (i = 0; a > i; i++)
		printf("*");
	printf("\n");
	for (i = 2; b > i; i++)
	{
		printf("*");
		for (j = 2; a > j; j++)
			printf(" ");
		printf("*\n");
	}
	for (i = 0; a > i; i++)
		printf("*");
	printf("\n");                              /*����ΰ��� ���j*/
	for (i = 0; i < 3; i++)
		printf(" ");
	for (i = 0; i < 3; i++)
		printf("*");
	printf("\n *");
	for (i = 0; i < 5; i++)
		printf(" ");
	printf("*\n");
	for (i = 0; i < 5; i++)                    
	{
		printf("*");
		for (j = 0; j < 7; j++)
			printf(" ");
		printf("*\n");
	}
	printf(" *");
	for (i = 0; i < 5; i++)
		printf(" ");
	printf("*\n");
	for (i = 0; i < 3; i++)
		printf(" ");
	for (i = 0; i < 3; i++)
		printf("*");
	printf("\n");                              /*0���� ���j*/
	a = 3;                                     /*�b�Y�e��*/
	b = 6;                                     /*�b�Y���ڪ���*/
	for (i = 1; i <= a; i++)
	{
		for (j = 0; j < a - i; j++)
			printf(" ");
		for (j = 0; j < i * 2 - 1; j++)
			printf("*");
		printf("\n");
	}
	for (i = 0; i < b; i++)
	{
		for (j = 0; j < a - 1; j++)
			printf(" ");
		printf("*\n");
	}                                           /*�b�Y����  ���j*/
	a = 5;                                      /*�٧Ϊ���*/
	for (i = 0; i < a; i++)
	{
		for (j = 1; j < a - i; j++)
			printf(" ");
		printf("*");
		for (j = 0; j < i * 2 - 1; j++)
			printf(" ");
		if(i!=0)
		printf("*");
		printf("\n");
	}
	for (i = 1; i < a; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");
		printf("*");
		for (j = 0; j < a * 2 - 3 - i * 2; j++)
			printf(" ");
		if (i != a-1)
			printf("*");
		printf("\n");
	}                                            /*�٧ΰ���   ���j*/
	system("pause");
	return 0;
}

