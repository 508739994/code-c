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


typedef unsigned int u_int;
int main()//typedef
{
	unsigned int num = 100;
	u_int num2 = 90;
	printf("%d\n", num);
	printf("%d\n", num2);
}