// ConsoleApplication38.cpp: 定义控制台应用程序的入口点。
//3.8.cpp递归调用求阶乘

#include "stdafx.h"
#include<iostream>
using namespace std;

//计算N的阶乘，递归调用
unsigned fac(unsigned n) {
	unsigned f;
	if (n == 0)
		f = 1;
	else
		f = n* fac(n - 1);
	return f;
}

int main()
{
	unsigned n;
	cout << "enter a positive integer:";
	cin >> n;
	unsigned y = fac(n);
	cout << n << "!=" << y << endl;
	return 0;
}

