#define _CRT_SECURE_NO_WARNINGS 1
//1.
//#include<stdio.h>
//int main()
//{
//	���泣��
//	10;
//	20;
//	30;
//	return 0;
//}


//2.
//#include<stdio.h>
//
//int main()
//{
//	const - ������
//	const���εĳ�����
//	const int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//����һ����ֵarr������10��Ԫ����ÿ��Ԫ���Ǹ�����
//	//���Ա���ɹ�
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	const int n = 10;
//	int arr[n] = { 0 };//n�Ǳ������Ǿ��г����ԣ������ǳ�����
//	//n��Ȼ���г����Ե������Ǳ���������Ӧ���볣����ֻ�ܰ�n��Ϊ10.
//	return 0;
//}

//#include<stdio.h>
////#define ����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };//={0}��ʾ��ʼ��
//	printf("%d\n", MAX);
//	return 0;
//}

//#include<stdio.h>
//
//enum Sex
//{   
//	//�·���Ĭ�ϵ�ֵ
//	MALE,//0
//	FEMALE,//1
//	SECRET//2
//};
////MALE,FEMALE,SECRET - ö�ٳ���
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d\n", s);//1
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//}

#include<stdio.h>
enum Color
{
	RED,
	YELLOW,
	BLUE
};
int main()
{
	enum Color color = RED;//color��һ������
	printf("%d\n", color);//0
	color = YELLOW;//���԰�ö�ٳ������color��
	//���ǲ����Ը�ö�ٳ�����ֵ	
	//RED = 6;//ö�ٳ��������ܱ���ֵ
	printf("%d\n", color);//1
	printf("%d\n", RED);//0
	printf("%d\n", YELLOW);//1
	printf("%d\n", BLUE);//2
	return 0;
}

