#include "stdio.h"
#include <Windows.h>
#include "TestProg.h"
#include "FileControl.h"
TestProg test;

 void main()
{

	 char filename_one[] = "单字符测试.txt";
	 FileControl file_one(filename_one);
	 file_one.InputMessage();
	 file_one.ReadMessage();
	 printf("\n");
	 printf("\n");
	 printf("\n");
	 printf("\n");
	 char filename_two[] = "字符串测试.txt";
	 FileControl file_two(filename_two);
	 file_two.InputString();
	 file_two.ReadString();
	 printf("\n");
	 printf("\n");
	 printf("\n");
	 printf("\n");
	 char filename_three[] = "格式化字符测试.txt";
	 FileControl file_three(filename_three);
	file_three.InputFormat();
	 file_three.ReadSFormat();
	

	 system("pause");


}