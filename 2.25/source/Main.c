#include <stdlib.h>
#include <stdio.h>
void three(void)
{
	printf("   ");
}
void two(void)
{
	printf("  ");
}
int main()
{
	int i, j=5, a=0; 
	for (j ; j > 0; j--)                         /*W¦r¥À*/
	{
		for (i = 1; i < j; i++)three();
		printf("WW\n");
		if (j == 1)
		{
			for (j = 1; j < 5; j++)
			{
				for (i = 0; i < j; i++)three();
				printf("WW\n");
			}
			j = 5;
			a += 1;
		}
		if (a == 2)break;
	}                                            /*W¦r¥À*/
	for (i = 0; i < 2; i++)three();              /*C¦r¥À*/
	printf("CCCC\n");
	three();
	printf("CCC");
	for (i = 0; i < 2; i++)two();
	printf("CCC\n");
	two();
	printf("CC");
	for (i = 0; i < 4; i++)two();
	printf("CC\n CC");
	for (i = 0; i < 5; i++)two();
	printf("CC\nCC");
	for (i = 0; i < 6; i++)two();
	printf("CC\n");
	for (j = 0; j < 4; j++)
	{
		printf("C");
		for (i = 0; i < 7; i++)two();
		printf("C\n");
	}                                             /*C¦r¥À*/
	j = 5; 
	a = 0; 
	for (j; j > 0; j--)                           /*W¦r¥À*/
	{
		for (i = 1; i < j; i++)three();
		printf("WW\n");
		if (j == 1)
		{
			for (j = 1; j < 5; j++)
			{
				for (i = 0; i < j; i++)three();
				printf("WW\n");
			}
			j = 5;
			a += 1;
		}
		if (a == 2)break;
	}                                               /*W¦r¥À*/
	system("pause");
	return 0;
}