// 3.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#pragma warning(disable: 4996)

int main()
{
	int a, b, c, d, e;
	printf("Enter TSBN :");
	scanf("%d-%d-%d-%d-%d", &a, &b, &c, &d, &e);
	printf("GS1 prefix: %d\n", a);
	printf("Group identifier: %.1d\n", b);
	printf("Publisher code: %.3d\n", c);
	printf("Item number: %.5d\n", d);
	printf("Check digit: %.1d\n", e);


	return 0;
}
