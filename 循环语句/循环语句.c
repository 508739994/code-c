#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()//if循环
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

//int main()//while循环
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

////打印100以内的奇数
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		printf("%d ", a);
//		a++;
//		a++;
//	}
//	return 0;
//}

//int main()//for
//{
//	int i = 0;
//	for (i = 1; i <= 20; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()//for循环的break
//{
//	int i = 0;
//	for (i = 1; i <= 20; i++)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()//for循环的break
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

////可能出现的问题
//int main()
//{
//	int a = 0;
//	int j = 0;
//	for (; a < 3; a++)
//	{
//		for (; j < 3; j++)
//		{
//			printf("hello\n");5
//		}
//	}
//	return 0;
//}

//请问循环要循环多少次？
//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (i=0, a=0; a = 0 ; i++ , a++)
//		a++;
//	return 0;
//}

//int main()//do while
//{
//	int i = 0;
//	do
//	{
//		printf("%d\n",i);
//		i++;
//
//	} while (i <= 10);
//	return 0;
//}

int main()//do while break的形式
{
	int i = 0;
	do
	{
		if (i == 5)
		{
			break;
		}
		printf("%d\n", i);
		i++;

	} while (i <= 10);
	return 0;
}



