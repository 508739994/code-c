#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�ؼ���
//int main()//auto
//{
//	{
//		auto int a = 10;//�Զ��������Զ����ٵ�
//		//��{���Զ�������}���Զ����١�
//		//auto  һ�㶼ʡ�Ե���
//		//auto  �µ�C�����������÷� --��ʱ������	
//	}
//	
//}

//int main()//register-- �����Ĵ�������
//{
//	register int a = 199;//����a��ֵ���ڼĴ�����
//	//ֻ��������飬��ȡ���ڱ�����˵����
//	return 0;
//}


//typedef unsigned int u_int;
//int main()//typedef
//{
//	unsigned int num = 100;
//	u_int num2 = 90;
//	printf("%d\n", num);
//	printf("%d\n", num2);
//}

//int main()//signed  --�����з�������
//{
//	signed short num1 = -32768;
//	signed short num2 = 32767;
//	short num3 = -32768;
//	//signed������Ĭ�ϵĿ��Բ���д
//	printf("num1= %d  num2= %d  num3= %d", num1,num2,num3);
//	return 0;
//}

//int main()//unsigned  --�����޷�������
//{
//	unsigned short num1 = 65535;
//	unsigned short num2 = 32767;
//	unsigned short num3 = -32767;
//	//signed������Ĭ�ϵĿ��Բ���д
//	printf("num1= %d  num2= %d  num3= %d", num1, num2, num3);
//	return 0;
//}

//static���ξֲ�����
//static����ȫ�ֱ���
//static���κ���

//void test()//δʹ��static���ξֲ�����
//{//�������Χi��������
//	int i = 1;//i��һ���ֲ�����
//	i++;
//	printf("%d ", i);
//}//�������Χi������ֵ����
//int main()
//{
//	int a = 0;
//	while (a < 10)
//	{
//		test();
//		a++;
//	}
//	return 0;
//}

//void test()//ʹ��static���ξֲ�����
//{//�������Χi��������
//	static int i = 1;//i��һ���ֲ�����
//	i++;
//	printf("%d ", i);
//}//�������Χi����������i++��ֵ��������һ��ʹ��
//int main()
//{
//	int a = 0;
//	while (a < 10)
//	{
//		test();
//		a++;
//	}
//	return 0;
//}

//extern --�����ⲿ����
extern int a;//extern����add.c�ı���
int main()//δʹ��static����ȫ�ֱ���
{
	printf("%d", a);
	return 0;
}

//extern --�����ⲿ����
extern int a;//extern����add.c�ı���
int main()//ʹ��static����ȫ�ֱ���
{
	printf("%d", a);
	return 0;
}

//�����ⲿ����
extern int add(int x, int y);
int main()//δʹ��static���κ���
{
	int a = 9;
	int b = 10;
	int num = add(a,b);
	printf("%d\n", num);
	return 0;
}

//�����ⲿ����
extern int add(int x, int y);
int main()//ʹ��static���κ���
{
	int a = 9;
	int b = 10;
	int num = add(a, b);
	printf("%d\n", num);
	return 0;
}
