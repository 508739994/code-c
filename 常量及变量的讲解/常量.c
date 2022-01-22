#define _CRT_SECURE_NO_WARNINGS 1
//1.
//#include<stdio.h>
//int main()
//{
//	字面常量
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
//	const - 常属性
//	const修饰的常变量
//	const int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//创建一个数值arr里面有10个元素他每个元素是个整型
//	//可以编译成功
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	const int n = 10;
//	int arr[n] = { 0 };//n是变量但是具有常属性，所以是常变量
//	//n虽然具有常属性但本质是变量。数组应输入常量，只能把n改为10.
//	return 0;
//}

//#include<stdio.h>
////#define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };//={0}表示初始化
//	printf("%d\n", MAX);
//	return 0;
//}

//#include<stdio.h>
//
//enum Sex
//{   
//	//下方是默认的值
//	MALE,//0
//	FEMALE,//1
//	SECRET//2
//};
////MALE,FEMALE,SECRET - 枚举常量
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
	enum Color color = RED;//color是一个变量
	printf("%d\n", color);//0
	color = YELLOW;//可以把枚举常量存进color中
	//但是不可以改枚举常量的值	
	//RED = 6;//枚举常量本身不能被赋值
	printf("%d\n", color);//1
	printf("%d\n", RED);//0
	printf("%d\n", YELLOW);//1
	printf("%d\n", BLUE);//2
	return 0;
}

