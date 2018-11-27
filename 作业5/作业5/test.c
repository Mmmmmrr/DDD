//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
////1.菱形
////        *
////       ***
////      *****
////     *******
////    *********
////   ***********
////  *************
////   ***********
////    *********
////     *******
////      *****
////       ***
////        *
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int line = 0;
//	scanf("%d", &line);
//	//打印上半部分
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//1.打印空格
//		//2.打印※
//		for (j = 0; j <line-1-i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*i+1 ; j++)
//		{
//			printf("*");
//		}printf("\n");
//	}
//	for (i = 0; i < line-1; i++)
//	{
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}printf("\n");
//	}
//	system("pause");
//	return 0;
//}


//2.求出0～999之间的所有“水仙花数”并输出。“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
//
///*
//在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
//例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
//153 = 1^3 + 5^3 + 3^3。
//370 = 3^3 + 7^3 + 0^3。
//371 = 3^3 + 7^3 + 1^3。
//407 = 4^3 + 0^3 + 7^3。
//*/
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 99999; i++)
//	{
//		//判断是否是水仙花数
//		//1.求位数
//		//2.计算次方和
//		int tmp = i;
//		int count = 1;
//		int sum = 0;
//		while (tmp/10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//		//计算次方和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//
//			printf("水仙花数为：%d \n",i);
//		}
//	}
//	system("pause");
//	return 0;
//}

//3.求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，例如：2+22+222+2222+22222 
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}
//4.编写一个程序

//int main()
//{
//	int ch = 0;
//	int count = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch == "{")
//			count++;
//		else if (ch == "}")
//			count--;
//		if ((ch == "}")&&(count == 0))
//		{
//			printf("成对出现\n");
//			return 0;
//		}
//		if (count == 0)
//			printf("成对出现");
//		else
//			printf("不成对出现");
//	}system("pause");
//	return 0;
//}
//int main()
//{
//	char ch;
//	int count = 0; //定义一个计数器来验证括号匹配情况
//	while ((ch = getchar()) != EOF)//当文件没有结束时用ch接收输入的信息   注：EOF为文件结束标志 当在编译器输入框数完所输的内容时 需要按Ctrl+z来结束本次输入
//	{
//		if (ch == '{')
//		{
//			count++;//若出现‘{ ’计数器++
//		}
//		if (count == 0 && ch == '}')
//		{
//			printf("没\n");
//			return 0;
//		}
//		if (ch == '}'&& count != 0)
//		{
//			count--;//若出现‘}’计数器--
//		}
//}
//	if (count == 0)
//		printf("匹配！");
//	else
//		printf("不匹配！");
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>

int main()
{
	int ch, i = 0;
	ch = getchar();
	if (ch == '}')
		printf("花括号不成对");

	while (ch != EOF)
	{
		if (ch == '{')
			i++;
		if (ch == '}')
			i--;
		ch = getchar();
	}

	{
		if (i == 0)
			printf("花括号成对");
		else
			printf("花括号不成对");

	}
	system("pause");
	return 0;
}
	