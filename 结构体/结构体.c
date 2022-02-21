#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////创建一个学生
//struct stu//创建学生类型
//{
//	char name[20];//成员变量
//	int age;
//	double score;//成绩
//};
////创建一本书
//struct Book//
//{
//	char name[30];//书名
//	float price;//书价
//	char id[30];//书号
//};
//
//int main()//结构体
//{
//	//因为一个学生是由几个数据组成的，所以这些数据我们用大括号把他括起来。
//	struct stu a = { "张三",18,89.9 };//结构体的创建和初始化
//	struct Book b = { "计算机组成原理",66,"ISBN978"};//结构体的创建和初始化
//	printf("%s,%d,%lf\n", a.name, a.age, a.score);//结构体变量.成员变量
//	printf("%s,%f,%s\n", b.name, b.price, b.id);
//	return 0;
//}

//struct stu//创建一个学生
//{
//	int age;//成员变量
//	float weight;
//};
//int main()
//{
//	struct stu a = { 17,66.6 };//结构体的创建和初始化
//	printf("%d,%f", a.age, a.weight);//结构体变量.成员变量
//	//意思是结构体变量访问成员变量依据a的值打印大括号内的书局
//	return 0;	
//}

struct stu//创建一个学生
{
	int age;//成员变量
	float weight;
};
int main()
{
	struct stu a = { 17,66.6 };//结构体的创建和初始化
	struct stu *pa=&a;
	printf("1: %d,%f\n", a.age, a.weight);
	printf("2: %d,%f\n", (*pa).age, (*pa).weight);
	printf("3: %d,%f\n", pa->age, pa->weight);
	//结构体指针->成员变量名
	return 0;
}
