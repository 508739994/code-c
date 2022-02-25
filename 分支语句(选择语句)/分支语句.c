#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()//if语句
//{
//	//单分支
//	int a = 20;
//	if (a >= 18)
//		printf("成年\n");
//
//	//双分支
//	int a = 10;
//	if (a >= 18)
//		printf("成年\n");
//	else
//		printf("未成年\n");
//
//	//多分支
//	int a = 101;
//	if (a < 18)
//		printf("未成年\n");
//	else if (a >= 18 && a < 26)
//		printf("青年\n");
//	else if (a >= 26 && a < 40)
//		printf("中年\n");
//	else if (a >= 40 && a < 60)
//		printf("壮年\n");
//	else if (a >= 60 && a <= 100)
//		printf("老年\n");
//	else
//		printf("长寿老人\n");
//	return 0;
//}

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

//int main()//switch语句  --break子句
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}

////练习题
////编写代码1-5表示工作日6-7表示休息日
//int main()//switch语句
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	}
//	return 0;
//}

//求m和n的值
int main()
{
	int n = 1;
	int m = 2;
	switch(n)
	{
		case 1:m++;//m=3
		case 2:n++;//n=2
		case 3:
			switch (n)
			{
			case 1:
				n++;
			case 2:m++; n++;//m=4  n=3
				break;
			}
		case 4:
			m++;//m=5
				break;
		default:
			break;
	}
	printf("m = %d,  n = %d\n", m, n);
	return 0;
}