#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����:��n��Χ��һȦ��˳���źš�
//�ӵ�1���˿�ʼ��������1��3��������������3�����˳�Ȧ�ӣ���������µ���ԭ���ĵڼ��ŵ���λ��

//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[100] = { 0 };//��ʼֵ������Ϊ0������3������Ϊ1
//
//	int time = 0;
//	int count = 0;
//	int i = 0;
//	while (1)
//	{
//		for (i = 0; i < n; i++)
//		{
//			if (arr[i] == 0)
//			{
//				count++;
//			}
//			if (count == 3)
//			//count%3 == 0�������ѭ��
//			{
//				count = 0;
//				arr[i] = 1;
//				time++;
//			}
//		}
//
//		if (n == time+1)
//		{
//			break;
//		}
//	}
//	//�ҵ��Ǹ���Ϊ1��Ԫ��
//	for(i=0;i<n;i++)
//	{
//		if (arr[i] == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}
//��������������ѭ����һ���Ժ󣬲�֪������ٴ�ͷ��ʼ��
//��countʵ����������ѭ��Ȧ





//ָ��д��
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int fac(int n)
//{
//	int* p = (int*)malloc(n * 4);//����һ�����飬��Ϊ������Ҫ�����ȣ�����������Բ���malloc���ٹ̶����賤�ȵ�����
//	//int arr[100]; Ҳ���������ַ�ʽ�������ں���ѭ����ʱ��ע�ⲻҪԽ��
//	int num=0,time=0;
//	int i;
//
//	//������Ԫ�س�ʼֵ����Ϊ1
//	//ѭ������ʱ������3�ĺŸ�������Ϊ0����
//	for (i = 0; i < n; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	//ѭ������
//	while (1)
//	{
//		for (i = 0; i < n; i++)
//		{
//			if (*(p+i) != 0)
//			{
//				num++;
//			}
//			if (num == 3)
//			{
//				*(p+i) = 0;
//				num = 0;
//				time++;
//			}
//		}
//		if (n == time + 1)
//		{
//			break;
//		}
//	}
//
//	//�������ʣ��������
//	for (i = 0; i < n; i++)
//	{
//		if (*(p + i) != 0)
//		{
//			break;
//		}
//	}
//	
//	free(p);//�ͷ����ڴ��ٷ������
//	return i + 1;
//
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int res = fac(n);
//
//	printf("%d\n", res);
//
//	return 0;
//}
//
////��ϰ��malloc������ָ��������ٴθ�ϰ��
////ѭ��������˼άֵ��ע�⣬ÿ����һ���Ͱ����������Ӧ����ֵ����һ��
////Ҳ������calloc������ʼֵ����Ϊ0��ÿ�α���һ�ΰ������ֵ����Ϊ1