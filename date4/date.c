#include <stdio.h>

//1.������A�е����ݺ�����B�е����ݽ��н�����������һ����
//void Print_arr(int arr[5], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr1[5] = { 0,1,2,3,4 };
//	int arr2[5] = { 5,4,5,6,1 };
//	int len = sizeof(arr1) / sizeof(arr1[0]);
//	int tmp = 0;
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	Print_arr(arr1,len);
//	Print_arr(arr2, len);
//	system("pause");
//	return 0;
//}
//	2. ����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ��
//int main()
//{
//	int i = 0;
//	double sum1 = 0;
//	double sum2 = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum1 += 1.0 / i;
//		}
//		else
//			sum2 += 1.0 / i;
//	}printf("sum=%lf", sum1 - sum2);
//	system("pause");
//	return 0;
//}
//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if(i % 10 == 9)
		count++;
		if (i / 10 == 9)
			count++;
	}printf("%d",count);
	system("pause");
	return 0;
}