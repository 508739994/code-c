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

#define add(x,y) (x+y)
int main()
{
	printf("%d\n", 7*add(2, 5));
	return 0;
}
