#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()//ָ�����
//{
//	int a = 10;//a���ڴ��з���Ŀռ��� - 4���ֽ�
//	&a;//ȡ��a�ĵ�ַ
//	printf("%p\n",&a);//%pר��������ӡ��ַ��
//	int* pa = &a;//pa��������ŵ�ַ�ģ���C������Pa��ָ�����
//	// * ˵����ָ�����,a��������int����pa��int����
//	//int ˵��paִ�еĶ�����int����
//
//	//��һ����
//	char ch = 'W';
//	char* pc = &ch;
//	//pcָ�����ch��ch������char����PC��char����
//	return 0;
//}
 
//int main()//* --�����ò�����
//{
//	int a = 10;
//	int* pa = &a;//a��ֵ���pa����
//	*pa = 20;//* �����ò����� | *pa����ͨ��pa��ߵĵ�ַ���ҵ�a | ��Ӹı�a��ֵ
//	printf("%d\n", a);
//	return 0;
//}

int main()//��ָ������Ĵ�С
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));

	return 0;
}