#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//define��һ��Ԥ����ָ��
//define�������

////#define�������
//#define  MAX 10000
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//#define�����
//#define add(x,y) x+y
//int main()
//{
//	printf("%d\n", add(2,5));
//	return 0;
//}

//#define add(x,y) (x+y)
//int main()
//{
//	printf("%d\n", 7*add(2, 5));
//	return 0;
//}

//������ʵ��
int Max(int x, int y)
{
	if (x < y)
		return y;
	else
		return x;
}

//���ʵ��
#define MAX(x,y) (x<y?y:x)

int main()
{
	int a = 10;
	int b = 20;
	//�����ķ�ʽ
	int max = Max(a, b);
	printf("max=%d\n", max);
	//��ķ�ʽ
	max = MAX(a, b);
	printf("max=%d\n", max);
	return 0;
}