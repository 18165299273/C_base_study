#include "TestProg.h"
/*
��������λ���ĸ�ʮ��ǧλ
*/
void TestProg::FenWei()
{
	printf("please input five numbers:\n");

	int num = 0;
	scanf_s("%d", &num);
	printf_s("input num:%d\n", num);
	if (num>=10000&&num<100000)
	{
		int wan = num / 10000;
		int qian = num % 10000 / 1000;
		int bai = num % 1000 /100 ;
		int shi = num % 100 / 10;;
		int ge = num % 10;
		printf(" wan = %d\n qian=%d\n bai = %d\n shi = %d \n ge = %d\n", wan, qian, bai, shi, ge);
	}
	else
	{
		printf("�����������ݲ��Ϸ���\n");
	}


	



}

/*
����4��������С�������

*/
void TestProg::Rangenum()
{
	printf_s("please input four numbers\n");
	int nums[4] = { 50,10,60,20 };
	scanf_s("%d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3]);
	
	//�������
	for (size_t i = 0; i < 4; i++)
	{
		printf_s("%d ", nums[i]);
	}
	printf("\n");
	int nums_length = sizeof(nums) / sizeof(nums[0]);
	//ð������ �����³�
	for (size_t i = 0; i < nums_length; i++)
	{
		for (size_t j = 0; j < nums_length -i-1; j++)
		{
			if (nums[j]>nums[j+1])
			{
				int temp = 0;
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}

	//�������
	for (size_t i = 0; i < 4; i++)
	{
		printf_s("%d ", nums[i]);
	}
	printf("\n");

}

/*
�������Ƿ�Ϊ����
*/
bool TestProg::CheckPrimeNum(int num)
{
	/*printf("please input  numbers:\n");
	bool is_prime = false;
	int num = 0;
	scanf_s("%d", &num);
	printf_s("input num:%d\n", num);*/
	bool is_prime = false;
	int flag = 1;

	for (size_t i = 2; i < num; i++)
	{
		if (num%i==0)
		{
			i = num;
			flag = 0;
		}
	}
	if (flag==1)
	{
		is_prime = true;
	//	printf("������\n");
	}
	else
	{

	//	printf("��������\n");
	}
	return is_prime;
}
/*
��ʾ������
*/
void TestProg::Display()
{

	

	printf("please input  numbers:\n");

	int num = 0;
	scanf_s("%d", &num);
	printf_s("input num:%d\n", num);

	for (size_t i = 1; i <= num; i++)
	{
		for (size_t j = 1; j <= num-i; j++)
		{
			printf(" ");
		}
		for (size_t k = 1; k <= 2*i-1; k++)
		{
			printf("*");
		}
		printf("\n");

	}



}
/*
��100-200֮�������
*/

void TestProg::DisplayPrimeNum()
{
	int row = 0;
	for (size_t i = 100; i <= 200; i++)
	{
		
		if (this->CheckPrimeNum(i))
		{
			row++;
			printf(" %d  ", i);
		}
		if (row%8==0)
		{
			printf("\n");
		}
		
	}
	printf("\n");
}

/*

�����ࡾ����
ʹ�ø����ռ�	a[0];
�ӱȽ�λ�ÿ�ʼ���Ӵ�λ����ǰ���ҵ�����С�Ľ��в��� 
*/
void TestProg::InsertSort()
{
	int a[6]={0,5,40,1,30,10};
	int array_length = sizeof(a) / sizeof(a[0]); //��ȡ �洢����ĳ���
	int right_pos = 0;
	for (size_t i = 2; i < array_length; i++)
	{
		a[0] = a[i];
		
		//��iλ�ÿ�ʼ��ͳһ����ƶ�һ��λ�ã�Ԥ��λ�ø�������ġ�
		for (right_pos = i-1; a[0] < a[right_pos]; right_pos--)
		{
			a[right_pos +1] = a[right_pos];
		}
		a[right_pos + 1] = a[0];
		
	}

	for (size_t i = 1; i < array_length; i++)
	{
		printf(" %d ", a[i]);
	}
	printf("\n");
}
/*
ѡ��������


*/
void TestProg::SelectSort()
{
	int a[6] = { 70,5,40,1,30,10 };
	int array_length = sizeof(a) / sizeof(a[0]); //��ȡ �洢����ĳ���
	int temp = 0;
	for (size_t i = 0; i < array_length; i++)
	{
		for (size_t j = i+1; j < array_length; j++)
		{
			if (a[i]>a[j])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	for (size_t i = 0; i < array_length; i++)
	{
		printf(" %d ", a[i]);
	}
	printf("\n");
}

/*
�ļ�����
*/
void TestProg::FileControl()
{

}