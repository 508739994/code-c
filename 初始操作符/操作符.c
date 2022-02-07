#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//算术运算符
//int main()//+ --加
//{
//	int a = 2 + 2;
//	printf("%d\n", a);
//	return 0;
//}

//int main()//- --减
//{
//	int a = 3 - 1;
//	printf("%d\n", a);
//	return 0;
//}

//int main()//* --乘
//{
//	int a = 3 * 3;
//	printf("%d\n", a);
//	return 0;
//}


//int main()// / --除
//{
//	//int a = 9 / 2;//只会得到商不会得到小数
//	float a = 9.0 / 2;//除号的两端任一个数是小数就会按照小数的算法来算
//	printf("%f\n", a);
//	return 0;
//}

//int main()//% --取模(余)
//{
//	int a = 9 % 2;//取模(余) --求得是余数
//	printf("%d\n", a);
//	return 0;
//}

////移位操作符
//int main()//左移操作符
//{
//	int a = 2;
//	int b = a << 1;//<<1  是要左移二进制的位数
//	printf("%d\n", b);
//	return 0;
//}

int main()//右移操作符
{
	int a = 4;
	int b = a >> 1;//>> 1 是要右移二进制的位数
	printf("%d\n", b);
	return 0;
}

