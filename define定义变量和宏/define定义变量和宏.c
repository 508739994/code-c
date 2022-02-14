#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//define是一个预处理指令
//define定义符号

////#define定义变量
//#define  MAX 10000
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//#define定义宏
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

//函数的实现
int Max(int x, int y)
{
	if (x < y)
		return y;
	else
		return x;
}

//宏的实现
#define MAX(x,y) (x<y?y:x)

int main()
{
	int a = 10;
	int b = 20;
	//函数的方式
	int max = Max(a, b);
	printf("max=%d\n", max);
	//宏的方式
	max = MAX(a, b);
	printf("max=%d\n", max);
	return 0;
}