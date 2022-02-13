#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//关键字
//int main()//auto
//{
//	{
//		auto int a = 10;//自动创建，自动销毁的
//		//从{进自动创建，}出自动销毁。
//		//auto  一般都省略掉的
//		//auto  新的C语言有其他用法 --暂时不考虑	
//	}
//	
//}

//int main()//register-- 声明寄存器变量
//{
//	register int a = 199;//建议a的值放在寄存器中
//	//只是提出建议，这取决于编译器说了算
//	return 0;
//}


//typedef unsigned int u_int;
//int main()//typedef
//{
//	unsigned int num = 100;
//	u_int num2 = 90;
//	printf("%d\n", num);
//	printf("%d\n", num2);
//}

//int main()//signed  --声明有符号类型
//{
//	signed short num1 = -32768;
//	signed short num2 = 32767;
//	short num3 = -32768;
//	//signed编译器默认的可以不编写
//	printf("num1= %d  num2= %d  num3= %d", num1,num2,num3);
//	return 0;
//}

//int main()//unsigned  --声明无符号类型
//{
//	unsigned short num1 = 65535;
//	unsigned short num2 = 32767;
//	unsigned short num3 = -32767;
//	//signed编译器默认的可以不编写
//	printf("num1= %d  num2= %d  num3= %d", num1, num2, num3);
//	return 0;
//}

//static修饰局部变量
//static修饰全局变量
//static修饰函数

//void test()//未使用static修饰局部变量
//{//进这个范围i创建变量
//	int i = 1;//i是一个局部变量
//	i++;
//	printf("%d ", i);
//}//出这个范围i变量的值销毁
//int main()
//{
//	int a = 0;
//	while (a < 10)
//	{
//		test();
//		a++;
//	}
//	return 0;
//}

//void test()//使用static修饰局部变量
//{//进这个范围i创建变量
//	static int i = 1;//i是一个局部变量
//	i++;
//	printf("%d ", i);
//}//出这个范围i变量不销毁i++的值保留供下一次使用
//int main()
//{
//	int a = 0;
//	while (a < 10)
//	{
//		test();
//		a++;
//	}
//	return 0;
//}

//extern --声明外部符号
extern int a;//extern引用add.c的变量
int main()//未使用static修饰全局变量
{
	printf("%d", a);
	return 0;
}

//extern --声明外部符号
extern int a;//extern引用add.c的变量
int main()//使用static修饰全局变量
{
	printf("%d", a);
	return 0;
}

//声明外部符号
extern int add(int x, int y);
int main()//未使用static修饰函数
{
	int a = 9;
	int b = 10;
	int num = add(a,b);
	printf("%d\n", num);
	return 0;
}

//声明外部符号
extern int add(int x, int y);
int main()//使用static修饰函数
{
	int a = 9;
	int b = 10;
	int num = add(a, b);
	printf("%d\n", num);
	return 0;
}
