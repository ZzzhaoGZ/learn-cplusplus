// 回文数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

bool symm(unsigned n) {
	unsigned i = n;
	unsigned m = 0;
	while (i>0)
	{
		m = m * 10 + i % 10;
		i / 10;
	}
	return m == n;
}

int main()
{
    return 0;
}

