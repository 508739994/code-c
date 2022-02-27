#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//123456给password  缓冲区里面有\n
//	//这里说一下password为什么没有取地址因为password
//	//因为password本身是一个数组，数组的数组名本身是一个地址。
//	printf("请输入密码(Y/N)：");
//
//	//清理缓冲区
//	//getchar(); //处理'\n'
//
//	int ch = getchar();
//	if (ch == 'Y')
//		printf("密码正确");
//	else
//		printf("密码错误");
//	return 0;
//}

//场景解析
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);//如输入1234 ABC
//	printf("%d",a);//输出只有1234
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//123456给password  缓冲区里面有\n
//	//这里说一下password为什么没有取地址因为password
//	//因为password本身是一个数组，数组的数组名本身是一个地址。
//	printf("请输入密码(Y/N)：");
//
//	//清理缓冲区
//	//getchar(); //处理'\n'
//
//		//清理缓冲区的多个字符
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//		printf("密码正确");
//	else
//		printf("密码错误");
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF本质是是-1
//	{
//		if (ch < '0' || ch>'9')//如果ch的值小于字符'0'或者大于字符‘9’//查阅ASCII编码
//			continue;//继续
//
//		putchar(ch);//打印当前输入的ch值
//		
//	}
//	return 0;
//}

//打印100以内的奇数
int main()
{
	int a = 1;
	while (a <= 100)
	{
		printf("%d ", a);
		a++;
		a++;
	}
	return 0;
}








