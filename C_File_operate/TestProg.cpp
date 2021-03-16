#include "TestProg.h"
/*
分离输入位数的个十百千位
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
		printf("输入输入数据不合法！\n");
	}


	



}

/*
输入4个数，从小到大输出

*/
void TestProg::Rangenum()
{
	printf_s("please input four numbers\n");
	int nums[4] = { 50,10,60,20 };
	scanf_s("%d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3]);
	
	//数据输出
	for (size_t i = 0; i < 4; i++)
	{
		printf_s("%d ", nums[i]);
	}
	printf("\n");
	int nums_length = sizeof(nums) / sizeof(nums[0]);
	//冒泡排序 大数下沉
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

	//数据输出
	for (size_t i = 0; i < 4; i++)
	{
		printf_s("%d ", nums[i]);
	}
	printf("\n");

}

/*
检验数是否为素数
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
	//	printf("是素数\n");
	}
	else
	{

	//	printf("不是素数\n");
	}
	return is_prime;
}
/*
显示三角形
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
求100-200之间的素数
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

插入类【排序】
使用辅助空间	a[0];
从比较位置开始，从此位置向前，找到比他小的进行插入 
*/
void TestProg::InsertSort()
{
	int a[6]={0,5,40,1,30,10};
	int array_length = sizeof(a) / sizeof(a[0]); //获取 存储数组的长度
	int right_pos = 0;
	for (size_t i = 2; i < array_length; i++)
	{
		a[0] = a[i];
		
		//从i位置开始，统一向后移动一个位置，预留位置给待插入的。
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
选择类排序


*/
void TestProg::SelectSort()
{
	int a[6] = { 70,5,40,1,30,10 };
	int array_length = sizeof(a) / sizeof(a[0]); //获取 存储数组的长度
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
文件操作
*/
void TestProg::FileControl()
{

}