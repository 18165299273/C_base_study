#include "FileControl.h"
#include <io.h>
void FileControl::CreatebaseofFile()
{
	FILE *file = fopen(filename,"wt+");
	if (file)
	{
		printf("文件创建或打开成功\n");
		fclose(file);
	}
	else
	{

		printf("文件打开失败\n");
	}
	
}

void FileControl::PrintfOfText()
{
	FILE *file = fopen(filename, "rt");
	if (file)
	{
		
		int fsize = _filelength(_fileno(file));

		printf("%s 文件的大小为：%d Byte\n",filename, fsize);

		fclose(file);
	}
	else
	{

		printf("文件打开失败\n");
	}
	
}
void FileControl::InputMessage()
{

	FILE *file = fopen(filename, "at+");
	if (file)
	{
		
		this->PrintfOfText();
		printf("请输入要存入的字符：\n");
		char ch = 'a';//初始化默认值
		fputc('\n', file);
		while (ch!='0')
		{
			ch = getchar();
			if(ch != '0')fputc(ch, file);

		}
		printf("文件存储成功");
		fclose(file);
		this->PrintfOfText();
		

	}
	else
	{

		printf("文件打开失败\n");
	}
	


}
void FileControl::ReadMessage()
{
	FILE *file = fopen(filename, "rt");
	if (file)
	{

		this->PrintfOfText();
		
		char ch = 'a';//初始化默认值
		while ((ch =fgetc(file))!=EOF)
		{
			printf("%c", ch);

		}
		printf("\n");
		fclose(file);
		


	}
	else
	{

		printf("文件打开失败\n");
	}
}

void FileControl::InputString()
{
	FILE *file = fopen(filename, "at+");
	if (file)
	{

		this->PrintfOfText();
		printf("请输入要存入的字符串：\n");
		fputc('\n', file);
		char ch[]= "字符写入测试：我是一个好饱阿波！";//初始化默认值
		int length = strlen(ch);
		if(fputs(ch,file)!=EOF)printf("文件存储成功");
		fclose(file);
		this->PrintfOfText();


	}
	else
	{

		printf("文件打开失败\n");
	}
}
void FileControl::ReadString()
{
	FILE *file = fopen(filename, "rt");
	if (file)
	{

		this->PrintfOfText();

		char ch[50];//初始化默认值
		while (fgets(ch,50,file))
		{
			printf("%s", ch);

		}
		printf("\n");
		fclose(file);



	}
	else
	{

		printf("文件打开失败\n");
	}
}

void FileControl::InputFormat()
{
	FILE *file = fopen(filename, "at+");
	if (file)
	{

		this->PrintfOfText();
		printf("请输入要存入的字符串：\n");
		char name[40] ;
		char age[4] ;
		
		while (scanf("%s %s", &name, &age)&&name[0]!='#')
		{
			
			if (fprintf(file, "\t%s\t%s\n", name, age))
			{
				printf("数据写入成功\n");
			}
			
		}

		printf("\n");
		fclose(file);
		this->PrintfOfText();
	}
	else
	{

		printf("文件打开失败\n");
	}

}
void FileControl::ReadSFormat()
{
	FILE *file = fopen(filename, "rt");
	if (file)
	{

		this->PrintfOfText();

		char name[40];
		char age[4];
		while (fscanf(file, "%s %s", name,age)!=EOF)
		{
			printf("姓名:%s 年龄：%s\n", name,age);

		}
		printf("\n");
		fclose(file);



	}
	else
	{

		printf("文件打开失败\n");
	}

}