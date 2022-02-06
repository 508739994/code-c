////#是一个指令形式
////include意思：包含
////包含一个叫stdio.h的文件
////std - standard标准  i - input输入 o - output输出
//#include<stdio.h>  //#包含<标准输入输出.h的头文件>
//
//int main() //  main是一个主函数-是程序的入口-整个C语言是从main函数开始执行的。
//{
//	printf("hello world\n");//输出hello word
//	return 0;//return意思返回 0是整数—返回一个整型
//}
////int是整型的意思
////main函数调用之后返回一个整型值
////主函数有且仅有一个
////return意思返回 0是整数
////print f表示打印函数的意思/全称print function
////printf("")双引号可以扩起你要输出的内容
//// \n表示输入完world我要换行转义字符
////printf ()是C语言标准库函数
//
////void main()
////{
////
////}
//

//#include<stdio.h>
//int main()
//{
//	char ch = 'A';//向计算机申请存放一个字符A，存放到ch这个变量中
//	printf("%C\n", ch);//以字符的形式打印数据
//	return 0;//返回一个整型
//}

//#include<stdio.h>
//int main()
//{
//	int age = 20;//整型变量age,20存放到age这个变量中
//	printf("小明的年龄=%d岁\n",age);//打印整型-十进制数据
//	return 0;
//}

//#include<stdio.h>
//int main()
//{                                //字节//可存放比特位//注意事项
//	printf("%d\n", sizeof(char)); //1个//8位//只能用单引号' '来包围，
//	printf("%d\n", sizeof(short));//2个//16位//
//	printf("%d\n", sizeof(int));  //4个//32位//
//	printf("%d\n", sizeof(long)); //4个//32位//有可能是4或者8取决编译器的平台
//	printf("%d\n", sizeof(long long));//8个//64位
//	printf("%d\n", sizeof(float)); //4个//32位
//	printf("%d\n", sizeof(double));//8个//64位
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//年龄
//	short age = 32767;//向内存申请两个字节-16个比特位/用来存放20
//	//体重
//	float weight = 99.6f;//编译器默认是double类型，96.5f加一个f单位就好了
//	printf("%d\n",age);
//	printf("%lf\n",weight);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//年龄
//	short age = 20;//向内存申请2个字节来存放20；
//	printf("小明的年龄是%d\n", age);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int age = 20;
//	float weight = 96.55f;
//	char ch = 'W';
//	printf("小明的年龄=%d体重为%f\n", age, weight);
//}