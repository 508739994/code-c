#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()//��ͨ��ʽ
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}


//int Add(int x, int y)//�����ķ�ʽ
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
//}//�����ĺô����պ����ô˺�����ֱ��дAdd(����1������2)������

int main()//����
{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//int d = 4;
	//�����Ӵ�ŷ�ʽ�϶�����
	
	//���鷽ʽ 
	//10������1-10������
	//����ʹ���±������ʵ�
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	char ch[5] = { 'a','b','c' };
	//5��Ԫ�صĿռ�ֻ����3��������ȫ��ʼ����ʣ���Ĭ��Ϊ0.
	while (i < 10)
	{
		printf("%d\n",arr[i]);
		i++;
	}
	return 0;
}
