#pragma once
#include <stdio.h>
#include <iostream>
class FileControl
{
public:

	FileControl(char *filename) { FILE *file = fopen(filename, "at+"); this->filename = filename; printf("C�ļ���������\n"); };
	~FileControl() { printf("%s ���Խ���", filename); };
public:
	void CreatebaseofFile();
	/*
	���ַ����� [���Գɹ�]
	*/
	void InputMessage();
	void ReadMessage();

	/*
	�ַ������� [���Գɹ�]
	*/
	void InputString();
	void ReadString();
	/*
	��ʽ��������� [���Գɹ�]
	*/
	void InputFormat();
	void ReadSFormat();
	/*
	�鿴�ļ���Ϣ [���Գɹ�]
	*/
	void PrintfOfText();

	char *filename;
};

