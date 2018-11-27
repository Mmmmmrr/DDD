#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//完成猜数字游戏
int main()
{
	int arr1[5] = { 0, 1, 2, 5, 6 };
	int arr2[5] = { 2, 5, 6, 8, 9 };
	int tmp = 0;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	printf("%d%d", arr1, arr2);
	system("pause");
	return 0;
}