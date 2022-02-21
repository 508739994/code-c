#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()//指针变量
//{
//	int a = 10;//a在内存中分配的空间是 - 4个字节
//	&a;//取出a的地址
//	printf("%p\n",&a);//%p专门用来打印地址的
//	int* pa = &a;//pa是用来存放地址的，在C语言中Pa叫指针变量
//	// * 说明是指针变量,a的类型是int所以pa是int类型
//	//int 说明pa执行的对象是int类型
//
//	//举一反三
//	char ch = 'W';
//	char* pc = &ch;
//	//pc指向的是ch，ch类型是char所以PC是char类型
//	return 0;
//}
 
//int main()//* --解引用操作符
//{
//	int a = 10;
//	int* pa = &a;//a的值存进pa里面
//	*pa = 20;//* 解引用操作符 | *pa就是通过pa里边的地址，找到a | 间接改变a的值
//	printf("%d\n", a);
//	return 0;
//}

int main()//求指针变量的大小
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