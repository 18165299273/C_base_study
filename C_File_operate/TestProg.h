#pragma once
#include <stdio.h>
#include <iostream>
class TestProg
{
public:
	TestProg() { printf_s("C语言程序设计基本函数测试：\n"); };
	~TestProg() { printf_s("C语言程序设计基本函数测试结束：\n"); };
	void FenWei();
	void Rangenum();
	bool CheckPrimeNum(int num);
	void Display();
	void DisplayPrimeNum();
	void InsertSort();
	void SelectSort();

	void FileControl();
};

