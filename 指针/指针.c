#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int a = 10;//a���ڴ��з���Ŀռ��� - 4���ֽ�
	printf("%p\n",&a);//%pר��������ӡ��ַ��
	int* pa = &a;//pa��������ŵ�ַ�ģ���C������Pa��ָ�����
	// * ˵����ָ�����,a��������int����pa��int����
	//int ˵��paִ�еĶ�����int����

	//��һ����
	char ch = 'W';
	char* pc = &ch;
	//pcָ�����ch��ch������char����PC��char����
	return 0;
}
 