#pragma once
#include <stdio.h>
#include <iostream>
class FileControl
{
public:

	FileControl(char *filename) { FILE *file = fopen(filename, "at+"); this->filename = filename; printf("C文件操作函数\n"); };
	~FileControl() { printf("%s 测试结束", filename); };
public:
	void CreatebaseofFile();
	/*
	单字符测试 [测试成功]
	*/
	void InputMessage();
	void ReadMessage();

	/*
	字符串测试 [测试成功]
	*/
	void InputString();
	void ReadString();
	/*
	格式化输入输出 [测试成功]
	*/
	void InputFormat();
	void ReadSFormat();
	/*
	查看文件信息 [测试成功]
	*/
	void PrintfOfText();

	char *filename;
};

