#include "FileControl.h"
#include <io.h>
void FileControl::CreatebaseofFile()
{
	FILE *file = fopen(filename,"wt+");
	if (file)
	{
		printf("�ļ�������򿪳ɹ�\n");
		fclose(file);
	}
	else
	{

		printf("�ļ���ʧ��\n");
	}
	
}

void FileControl::PrintfOfText()
{
	FILE *file = fopen(filename, "rt");
	if (file)
	{
		
		int fsize = _filelength(_fileno(file));

		printf("%s �ļ��Ĵ�СΪ��%d Byte\n",filename, fsize);

		fclose(file);
	}
	else
	{

		printf("�ļ���ʧ��\n");
	}
	
}
void FileControl::InputMessage()
{

	FILE *file = fopen(filename, "at+");
	if (file)
	{
		
		this->PrintfOfText();
		printf("������Ҫ������ַ���\n");
		char ch = 'a';//��ʼ��Ĭ��ֵ
		fputc('\n', file);
		while (ch!='0')
		{
			ch = getchar();
			if(ch != '0')fputc(ch, file);

		}
		printf("�ļ��洢�ɹ�");
		fclose(file);
		this->PrintfOfText();
		

	}
	else
	{

		printf("�ļ���ʧ��\n");
	}
	


}
void FileControl::ReadMessage()
{
	FILE *file = fopen(filename, "rt");
	if (file)
	{

		this->PrintfOfText();
		
		char ch = 'a';//��ʼ��Ĭ��ֵ
		while ((ch =fgetc(file))!=EOF)
		{
			printf("%c", ch);

		}
		printf("\n");
		fclose(file);
		


	}
	else
	{

		printf("�ļ���ʧ��\n");
	}
}

void FileControl::InputString()
{
	FILE *file = fopen(filename, "at+");
	if (file)
	{

		this->PrintfOfText();
		printf("������Ҫ������ַ�����\n");
		fputc('\n', file);
		char ch[]= "�ַ�д����ԣ�����һ���ñ�������";//��ʼ��Ĭ��ֵ
		int length = strlen(ch);
		if(fputs(ch,file)!=EOF)printf("�ļ��洢�ɹ�");
		fclose(file);
		this->PrintfOfText();


	}
	else
	{

		printf("�ļ���ʧ��\n");
	}
}
void FileControl::ReadString()
{
	FILE *file = fopen(filename, "rt");
	if (file)
	{

		this->PrintfOfText();

		char ch[50];//��ʼ��Ĭ��ֵ
		while (fgets(ch,50,file))
		{
			printf("%s", ch);

		}
		printf("\n");
		fclose(file);



	}
	else
	{

		printf("�ļ���ʧ��\n");
	}
}

void FileControl::InputFormat()
{
	FILE *file = fopen(filename, "at+");
	if (file)
	{

		this->PrintfOfText();
		printf("������Ҫ������ַ�����\n");
		char name[40] ;
		char age[4] ;
		
		while (scanf("%s %s", &name, &age)&&name[0]!='#')
		{
			
			if (fprintf(file, "\t%s\t%s\n", name, age))
			{
				printf("����д��ɹ�\n");
			}
			
		}

		printf("\n");
		fclose(file);
		this->PrintfOfText();
	}
	else
	{

		printf("�ļ���ʧ��\n");
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
			printf("����:%s ���䣺%s\n", name,age);

		}
		printf("\n");
		fclose(file);



	}
	else
	{

		printf("�ļ���ʧ��\n");
	}

}