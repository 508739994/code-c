#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()//ifѭ��
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

//int main()//whileѭ��
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

////��ӡ100���ڵ�����
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		printf("%d ", a);
//		a++;
//		a++;
//	}
//	return 0;
//}

//int main()//for
//{
//	int i = 0;
//	for (i = 1; i <= 20; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()//forѭ����break
//{
//	int i = 0;
//	for (i = 1; i <= 20; i++)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()//forѭ����break
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

////���ܳ��ֵ�����
//int main()
//{
//	int a = 0;
//	int j = 0;
//	for (; a < 3; a++)
//	{
//		for (; j < 3; j++)
//		{
//			printf("hello\n");5
//		}
//	}
//	return 0;
//}

//����ѭ��Ҫѭ�����ٴΣ�
//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (i=0, a=0; a = 0 ; i++ , a++)
//		a++;
//	return 0;
//}

//int main()//do while
//{
//	int i = 0;
//	do
//	{
//		printf("%d\n",i);
//		i++;
//
//	} while (i <= 10);
//	return 0;
//}

int main()//do while break����ʽ
{
	int i = 0;
	do
	{
		if (i == 5)
		{
			break;
		}
		printf("%d\n", i);
		i++;

	} while (i <= 10);
	return 0;
}



