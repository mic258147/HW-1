#include<stdlib.h>
#include<stdio.h>

int main()
{
	int mode;
	float weight, height,bmi;
	printf("��ܳ��:1.���q�S���׭^�T2.���q���簪�פ���\n��ܪ��Ʀr:");
	scanf_s("%d", &mode);
	if (mode == 1)
	{
		printf("�п�J���q(�S):");
		scanf_s("%f", &weight);
		printf("�п�J����(�^�T):");
		scanf_s("%f", &height);
		bmi = weight * 703 / height / height;
	}
	else if (mode == 2)
	{
		printf("�п�J���q(����):");
		scanf_s("%f", &weight);
		printf("�п�J����(����):");
		scanf_s("%f", &height);
		bmi = weight / height / height;
	}
	else
	{
		printf("�L�Ī��ﶵ �ϥιw�]���\n");
		printf("�п�J���q(����):");
		scanf_s("%f", &weight);
		printf("�п�J����(����):");
		scanf_s("%f", &height);
		bmi = weight / height / height;
	}
	printf("Your BMI is:\"%f\"\n",bmi);
	if (bmi < 18.5)printf("BMI Values is:Underweight\n");
	if (18.5 <= bmi && bmi < 25)printf("BMI Values is:Normal\n");
	if (25 <= bmi && bmi < 30)printf("BMI Values is:Overweight\n");
	if (bmi >= 30)printf("BMI Values is:Obese\n");
	system("pause");
	return 0;

}
