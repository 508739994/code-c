#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//123456��password  ������������\n
//	//����˵һ��passwordΪʲôû��ȡ��ַ��Ϊpassword
//	//��Ϊpassword������һ�����飬�����������������һ����ַ��
//	printf("����������(Y/N)��");
//
//	//��������
//	//getchar(); //����'\n'
//
//	int ch = getchar();
//	if (ch == 'Y')
//		printf("������ȷ");
//	else
//		printf("�������");
//	return 0;
//}

//��������
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);//������1234 ABC
//	printf("%d",a);//���ֻ��1234
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//123456��password  ������������\n
//	//����˵һ��passwordΪʲôû��ȡ��ַ��Ϊpassword
//	//��Ϊpassword������һ�����飬�����������������һ����ַ��
//	printf("����������(Y/N)��");
//
//	//��������
//	//getchar(); //����'\n'
//
//		//���������Ķ���ַ�
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//		printf("������ȷ");
//	else
//		printf("�������");
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF��������-1
//	{
//		if (ch < '0' || ch>'9')//���ch��ֵС���ַ�'0'���ߴ����ַ���9��//����ASCII����
//			continue;//����
//
//		putchar(ch);//��ӡ��ǰ�����chֵ
//		
//	}
//	return 0;
//}

//��ӡ100���ڵ�����
int main()
{
	int a = 1;
	while (a <= 100)
	{
		printf("%d ", a);
		a++;
		a++;
	}
	return 0;
}








