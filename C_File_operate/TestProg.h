#pragma once
#include <stdio.h>
#include <iostream>
class TestProg
{
public:
	TestProg() { printf_s("C���Գ�����ƻ����������ԣ�\n"); };
	~TestProg() { printf_s("C���Գ�����ƻ����������Խ�����\n"); };
	void FenWei();
	void Rangenum();
	bool CheckPrimeNum(int num);
	void Display();
	void DisplayPrimeNum();
	void InsertSort();
	void SelectSort();

	void FileControl();
};

