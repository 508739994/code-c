#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���������
//int main()//+ --��
//{
//	int a = 2 + 2;
//	printf("%d\n", a);
//	return 0;
//}

//int main()//- --��
//{
//	int a = 3 - 1;
//	printf("%d\n", a);
//	return 0;
//}

//int main()//* --��
//{
//	int a = 3 * 3;
//	printf("%d\n", a);
//	return 0;
//}


//int main()// / --��
//{
//	//int a = 9 / 2;//ֻ��õ��̲���õ�С��
//	float a = 9.0 / 2;//���ŵ�������һ������С���ͻᰴ��С�����㷨����
//	printf("%f\n", a);
//	return 0;
//}

//int main()//% --ȡģ(��)
//{
//	int a = 9 % 2;//ȡģ(��) --���������
//	printf("%d\n", a);
//	return 0;
//}

////��λ������
//int main()//���Ʋ�����
//{
//	int a = 2;
//	int b = a << 1;//<<1  ��Ҫ���ƶ����Ƶ�λ��
//	printf("%d\n", b);
//	return 0;
//}

//int main()//���Ʋ�����
//{
//	int a = 4;
//	int b = a >> 1;//>> 1 ��Ҫ���ƶ����Ƶ�λ��
//	printf("%d\n", b);
//	return 0;
//}

//��ֵ������
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
//	//��ͨ��ʽ
//	//int a = a + 3;
//
//	//���ø�ֵ�����
//	a += 3;
//
//	printf("%d\n", a);
//	return 0;
//}


//int main()// -=
//{
//	int a = 8;
//
//	//��ͨ��ʽ
//	//int a = a - 3;
//
//	//���ø�ֵ�����
//	a -= 3;
//
//	printf("%d\n", a);
//	return 0;
//}

//int main()// *=
//{
//	int a = 8;
//
//	//��ͨ��ʽ
//	//int a = a * 3;
//
//	//���ø�ֵ�����
//	a *= 3;
//
//	printf("%d\n", a);
//	return 0;
//}

//int main()// /=
//{
//	float a = 8.0;
//
//	//��ͨ��ʽ
//	//int a = a / 3;
//
//	//���ø�ֵ�����
//	a /= 3;
//
//	printf("%f\n", a);
//	return 0;
//}

//��Ŀ�����
//int main()//��
//{
//	//0���Ǽ١���0������
//	int a = 0;
//	printf("%d\n", !a);//a��ֵ0 --��!a��ʹ�������
//	return 0;
//}

//int main()//-
//{
//	//0���Ǽ١���0������
//	int a = -3;//��ֵ
//	printf("%d\n", a);
//	return 0;
//}

//int main()//sizeof  --������������͵Ĵ�С
//{
//	//sizeof��һ�������������Ǻ���
//	//�����������ͻ��߱����Ĵ�С
//	int a = 10;
//	printf("%d\n", sizeof(int));//������()������ʡ��
//	printf("%d\n", sizeof(a));//�������()����ʡ��--
//	//sizeof��������ž�����Ҫʡ��
//	return 0;
//}

//int main()//sizeof --���������С
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//����������ܴ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr[0]));//����Ԫ�ظ����Ĵ�С
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
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
//	//int b = ++a;//ǰ��++,�ȼ����ʹ��
//	
//	int a = 10;
//	int b = a++;//����++,��ʹ�ú����
//	//a++������ʽ�Ľ���ȸ�����aʹ�ã��ٸ�ֵ��b
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//������ʹ��ǿ������ת��
//	printf("%d\n", a);
//	return 0;
//}

//int main()//�߼������ &&
//{
//	//��0Ϊ�棬0Ϊ��
//	int a = 9;
//	int b = 8;
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()//�߼������ ||
//{
//	//��0Ϊ�棬0Ϊ��
//	//����ֵΪ���ĳ��ֵΪ����Ϊ��
//	//ֻ�е�����ֵ��Ϊ�ٵ�ʱ��ֵ��Ϊ��
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
	////���a>b��������a��ֵ��max
	//if (a > b)
	//{
	//	max = a;//��Ȼ������
	//}
	//else//�����b��ֵ��max
	//{
	//	max = b;//����
	//}
	max = a > b ? a : b;
	//a>b�ǲ��ǳ���������a��ֵ��max��������b��ֵ��max
	printf("%d\n", max);
	return 0;
}




