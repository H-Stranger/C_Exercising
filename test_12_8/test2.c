#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//��Ŀ��������һ���ַ����е����е��ʣ�������ʵ�����ĸ���Ǵ�д��ĸ����ѵ��ʵ�����ĸ��ɴ�д��ĸ��
//���ַ����У�����֮��ͨ���հ׷��ָ����հ׷��������ո�(' ')���Ʊ���('\t')���س���('\r')�����з�('\n')��

//int main()
//{
//    char str[101];
//    while (gets(str) != NULL)
//    {
//        //��һ���ַ������ж�
//        if (str[0] >= 'a' && str[0] <= 'z')
//        {
//            str[0] = str[0] - 32;
//        }
//        //�ӵڶ����ַ���ʼ�ж�
//        int i;
//        for (i = 1; i < strlen(str); i++)
//        {
//            if (str[i - 1] == ' ' || str[i - 1] == '\t' ||
//                str[i - 1] == '/r' || str[i - 1] == '\n')
//            {
//                str[i] = str[i] - 32;
//            }
//        }
//        printf("%s\n", str);
//    }
//    return 0;
//}
//���ڵ�һ���ַ������ж�   �����жϷ����õ���i-1��i���� ������i��i+1���䣬����Ϊ�˷�ֹ������ʵ�ʱ������Խ����
//ȱ�㣺������ĸ����Ϊ��д������������ĸ����Ϊ��д����ASCII��+32�����´���

//�Ľ� 
//int main()
//{
//    char str[101];
//    while (gets(str) != NULL)
//    {
//        //��һ���ַ������ж�
//        if (str[0] >= 'a' && str[0] <= 'z')
//        {
//            str[0] = str[0] - 32;
//        }
//        int i;
//        for (i = 1; i < strlen(str); i++)
//        {
//            if ((str[i - 1] == ' ' || str[i - 1] == '\t' ||str[i - 1] == '/r' ||str[i - 1] == '\n') &&
//                (str[i] >= 'a' && str[i] <= 'z'))
//            {
//                str[i] = str[i] - 32;
//            }
//        }
//        printf("%s\n", str);
//    }
//    return 0;
//}