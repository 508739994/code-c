#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int a = 10;//a在内存中分配的空间是 - 4个字节
	printf("%p\n",&a);//%p专门用来打印地址的
	int* pa = &a;//pa是用来存放地址的，在C语言中Pa叫指针变量
	// * 说明是指针变量,a的类型是int所以pa是int类型
	//int 说明pa执行的对象是int类型

	//举一反三
	char ch = 'W';
	char* pc = &ch;
	//pc指向的是ch，ch类型是char所以PC是char类型
	return 0;
}
 