#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()//选择语句
//{
//	int input = 0;
//	printf("你要不要好好学习(1/0)\n");//请输入0或者1
//	scanf("%d", &input);//输入0或者1
//	if (input == 1)//如果是1打印成为大牛
//	{
//		printf("成为大牛\n");
//	}
//	else//否则打印回家烤红薯
//	{
//		printf("回家烤红薯");
//	}
//	return 0;
//}

int main()//循环语句
{
	int line = 0;
	while (line < 3000)//条件line<3000执行while循环反之跳出
	{
		printf("写代码%d\n", line);//line<3000打印写代码
		line++;//line的值+1
	}
	if (line == 3000)//如果line=3000
	{
		printf("拿offer\n");//打印拿offer
	}
	return 0;
}

