#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//单分支
	int a = 20;
	if (a >= 18)
		printf("成年\n");

	//双分支
	int a = 10;
	if (a >= 18)
		printf("成年\n");
	else
		printf("未成年\n");

	//多分支
	int a = 101;
	if (a < 18)
		printf("未成年\n");
	else if (a >= 18 && a < 26)
		printf("青年\n");
	else if (a >= 26 && a < 40)
		printf("中年\n");
	else if (a >= 40 && a < 60)
		printf("壮年\n");
	else if (a >= 60 && a <= 100)
		printf("老年\n");
	else
		printf("长寿老人\n");
	return 0;
}

////练习题
////判断一个数是否为奇数
//int main()
//{
//	int a = 5;
//	if (a % 2 == 1)
//		printf("奇数");
//	return 0;
//}
//
////输出1-100内的奇数
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//		if(a % 2 == 1)
//		printf("%d ", a);
//	return 0;
//}
//
////第二种方法
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 100; a += 2)
//		printf("%d ", a);
//	return 0;
//}
