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

//int main()//右移操作符
//{
//	int a = 4;
//	int b = a >> 1;//>> 1 是要右移二进制的位数
//	printf("%d\n", b);
//	return 0;
//}

//赋值操作符
//int main()// =
//{
//	int a = 7;
//	printf("%d\n", a);
//	return 0;
//}

//int main()// +=
//{
//	int a = 8;
//
//	//普通形式
//	//int a = a + 3;
//
//	//运用赋值运算符
//	a += 3;
//
//	printf("%d\n", a);
//	return 0;
//}


//int main()// -=
//{
//	int a = 8;
//
//	//普通形式
//	//int a = a - 3;
//
//	//运用赋值运算符
//	a -= 3;
//
//	printf("%d\n", a);
//	return 0;
//}

//int main()// *=
//{
//	int a = 8;
//
//	//普通形式
//	//int a = a * 3;
//
//	//运用赋值运算符
//	a *= 3;
//
//	printf("%d\n", a);
//	return 0;
//}

//int main()// /=
//{
//	float a = 8.0;
//
//	//普通形式
//	//int a = a / 3;
//
//	//运用赋值运算符
//	a /= 3;
//
//	printf("%f\n", a);
//	return 0;
//}

//单目运算符
//int main()//！
//{
//	//0就是假。非0就是真
//	int a = 0;
//	printf("%d\n", !a);//a的值0 --而!a会使它变成真
//	return 0;
//}

//int main()//-
//{
//	//0就是假。非0就是真
//	int a = -3;//负值
//	printf("%d\n", a);
//	return 0;
//}

//int main()//sizeof  --计算变量和类型的大小
//{
//	//sizeof是一个操作符，不是函数
//	//计算数据类型或者变量的大小
//	int a = 10;
//	printf("%d\n", sizeof(int));//求类型()不可以省略
//	printf("%d\n", sizeof(a));//求变量是()可以省略--
//	//sizeof后面的括号尽量不要省略
//	return 0;
//}

//int main()//sizeof --计算数组大小
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//计算数组的总大小，单位是字节
//	printf("%d\n", sizeof(arr[0]));//计算元素个数的大小
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//	printf("%d\n", sz);
//	return 0;
//}

//int main()// ~
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	return 0;
//}

//int main()// ++
//{
//	//int a = 10;
//	//int b = ++a;//前置++,先计算后使用
//	
//	int a = 10;
//	int b = a++;//后置++,先使用后计算
//	//a++这个表达式的结果先给变量a使用，再赋值给b
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//不建议使用强制类型转换
//	printf("%d\n", a);
//	return 0;
//}

//int main()//逻辑运算符 &&
//{
//	//非0为真，0为假
//	int a = 9;
//	int b = 8;
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()//逻辑运算符 ||
//{
//	//非0为真，0为假
//	//两个值为真或某个值为真结果为真
//	//只有当两个值都为假的时候值才为假
//	int a = 0;
//	int b = 0;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 9;
	int max = 0;
	////如果a>b条件成立a赋值给max
	//if (a > b)
	//{
	//	max = a;//显然不成立
	//}
	//else//否则就b赋值给max
	//{
	//	max = b;//成立
	//}
	max = a > b ? a : b;
	//a>b是不是成立，成立a赋值给max，不成立b赋值给max
	printf("%d\n", max);
	return 0;
}




