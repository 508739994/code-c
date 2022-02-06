#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()//普通方式
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}


//int Add(int x, int y)//函数的方式
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = Add(num1 , num2);
//	printf("%d\n", sum);
//	return 0;
//}//函数的好处是日后运用此函数就直接写Add(变量1，变量2)就行了

int main()//数组
{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//int d = 4;
	//这样子存放方式肯定不好
	
	//数组方式 
	//10个整型1-10存起来
	//数组使用下标来访问的
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	char ch[5] = { 'a','b','c' };
	//5个元素的空间只放了3个，不完全初始化，剩余的默认为0.
	while (i < 10)
	{
		printf("%d\n",arr[i]);
		i++;
	}
	return 0;
}
