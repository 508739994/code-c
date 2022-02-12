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


typedef unsigned int u_int;
int main()//typedef
{
	unsigned int num = 100;
	u_int num2 = 90;
	printf("%d\n", num);
	printf("%d\n", num2);
}