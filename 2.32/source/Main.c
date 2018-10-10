#include<stdlib.h>
#include<stdio.h>

int main()
{
	int mode;
	float weight, height,bmi;
	printf("選擇單位:1.重量磅高度英吋2.重量公斤高度公尺\n選擇的數字:");
	scanf_s("%d", &mode);
	if (mode == 1)
	{
		printf("請輸入重量(磅):");
		scanf_s("%f", &weight);
		printf("請輸入身高(英吋):");
		scanf_s("%f", &height);
		bmi = weight * 703 / height / height;
	}
	else if (mode == 2)
	{
		printf("請輸入重量(公斤):");
		scanf_s("%f", &weight);
		printf("請輸入身高(公尺):");
		scanf_s("%f", &height);
		bmi = weight / height / height;
	}
	else
	{
		printf("無效的選項 使用預設單位\n");
		printf("請輸入重量(公斤):");
		scanf_s("%f", &weight);
		printf("請輸入身高(公尺):");
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
