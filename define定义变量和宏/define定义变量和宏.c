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

#define add(x,y) (x+y)
int main()
{
	printf("%d\n", 7*add(2, 5));
	return 0;
}
