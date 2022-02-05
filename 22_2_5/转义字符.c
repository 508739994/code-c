#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()// \? --三字母词
//{
//	printf("are you ok??)");
//		return 0;
//}

//int main()// \' --打印单引号
//{
//	printf("%c\n", '\'');
//	return 0;
//}

//int main()// \" --打印双引号
//{
//	printf("%s\n", "\"");
//	return 0;
//}

//int main()//  \\ --打印反斜杠\
//
//{
//	printf("\\");// -- \\转义输出为\  
//	//反斜杠本身已用来表示转义字符的开头
//	return 0;
//}

//int main()//  \a --蜂鸣
//{
//	printf("\a");// --\a 蜂鸣
//	return 0;
//}

//int main()// \b 退格键
//{
//	printf("%s\b", "BBB");//相当于按一次退格键（Backspace）
//	return 0;
//}

//int main()  //  \f--换页光标移至下一页开头
// 
//{
//	printf("Hello\favc");
//	//相当于Word书写hello在第二页书写avc
//	//执行该程序我测试不出来
//	return 0;
//}

//int main()// \n --换行
//{
//	printf("%s\n", "\"");
//	return 0;
//}

//int main()//  \r --当前位置移至本行开头
//{
//	printf("deadad\rabd");
//	//因为\r占一个字符，而字符后面ab占两个字符
//	//zb在前字符所占的空格在后才输入dad
//
//	//为什么只打印dad
//	//因为\rab，占三个字符而deadad要减掉前面三个字符
//	//呈现ab dad
//
//	return 0;
//}

//int main()// \t- 水平制表符
//{
//	//printf("C:\text\text.c");
//	printf("ab\ncd");
//	return 0;
//}

//int main()// \v--垂直制表符  结果应为
////                         Hello
////                              avc
////现在的编译器大多不支持
//{
//	printf("Hello\vavc");
//	return 0;
//}

//int main()  // \0- \0后面的值为空
//{
//	printf("Hello\0avc");//执行该程序\0后面的字符表示为空
//	return 0;
//}

//int main() // \ddd
//{
//	printf("%c\n", '\101');
//	//%c-打印的是字符 \n表示打印后换行 
//	//101是8进制转换为十进制是65
//	//而ASCII编码中65代表的是大写A
//	return 0;
//}


//int main()  //\xhh --十六进制所代表的任意字符
//{
//	printf("%c\n", '\x30');
//	return 0;
//	// \x30表示十六进制十进制为48
//	//而%c打印的是ASCII编码位于48的字符0
//
//}

//测试
//求下提的字符长度
//int main()
//{
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}
//答：14个字符
//c: \test \32 8  \t est.c 
//2   1 3  1   1   1  5
//\t算一个字符 \32算一个字符  而8不是八进制单独算

int main()
{
	printf("are you ok??)");//三字母词
	printf("%c\n", '\'');// \' --打印单引号
	printf("%s\n", "\"");//打印双引号
	printf("\\");// -- \\转义输出为\
	printf("\a");// --\a 蜂鸣
	printf("%s\b", "BBB");//相当于按一次退格键（Backspace）
	printf("Hello\favc");//--\f--相当于Word书写hello在第二页书写avc执行该程序我测试不出来
	printf("%c\n", '\101');//换行
	printf("deadad\rabd");//-\r- 因为\r占一个字符，而字符后面ab占两个字符zb在前字符所占的空格在后才输入dad
	printf("C:\text\text.c");// \t- 水平制表符
	printf("Hello\vavc");//-\v- 垂直制表符
	printf("Hello\0avc");// \0- \0后面的值为空
	printf("%c\n", '\101');// \ddd
	printf("%c\n", '\x30');//\xhh --十六进制所代表的任意字符
	return 0;
}




