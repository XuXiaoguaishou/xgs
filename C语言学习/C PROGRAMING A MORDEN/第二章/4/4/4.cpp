// 4.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#pragma warning(disable:4996)

int main()
{
	float amount, tax_added;
	printf("Enter an amount:");
	scanf("%f", &amount);
	tax_added = amount * 1.05f;
	printf("$%.2f", tax_added);
	return 0;
}
