#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()//ѡ�����
//{
//	int input = 0;
//	printf("��Ҫ��Ҫ�ú�ѧϰ(1/0)\n");//������0����1
//	scanf("%d", &input);//����0����1
//	if (input == 1)//�����1��ӡ��Ϊ��ţ
//	{
//		printf("��Ϊ��ţ\n");
//	}
//	else//�����ӡ�ؼҿ�����
//	{
//		printf("�ؼҿ�����");
//	}
//	return 0;
//}

int main()//ѭ�����
{
	int line = 0;
	while (line < 3000)//����line<3000ִ��whileѭ����֮����
	{
		printf("д����%d\n", line);//line<3000��ӡд����
		line++;//line��ֵ+1
	}
	if (line == 3000)//���line=3000
	{
		printf("��offer\n");//��ӡ��offer
	}
	return 0;
}

