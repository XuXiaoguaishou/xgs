// 6.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#pragma warning(disable:4996)

int main()
{
	float x, y;
	printf("Enter x:");
	scanf("%f", &x);
	y = ((((3 * x + 2)*x - 5)*x - 1)*x + 7)*x - 6;
	printf("%f", y);
	return 0;
}

