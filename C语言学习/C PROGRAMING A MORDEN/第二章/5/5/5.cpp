// 5.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#pragma warning(disable:4996)

int main()
{
	float x, y;
	printf("Enter x:");
	scanf("%f", &x);
	y = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x + 7*x - 6;
	printf("%f", y);
	return 0;
}
