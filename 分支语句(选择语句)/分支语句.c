#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()//if���
//{
//	//����֧
//	int a = 20;
//	if (a >= 18)
//		printf("����\n");
//
//	//˫��֧
//	int a = 10;
//	if (a >= 18)
//		printf("����\n");
//	else
//		printf("δ����\n");
//
//	//���֧
//	int a = 101;
//	if (a < 18)
//		printf("δ����\n");
//	else if (a >= 18 && a < 26)
//		printf("����\n");
//	else if (a >= 26 && a < 40)
//		printf("����\n");
//	else if (a >= 40 && a < 60)
//		printf("׳��\n");
//	else if (a >= 60 && a <= 100)
//		printf("����\n");
//	else
//		printf("��������\n");
//	return 0;
//}

////��ϰ��
////�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int a = 5;
//	if (a % 2 == 1)
//		printf("����");
//	return 0;
//}
//
////���1-100�ڵ�����
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//		if(a % 2 == 1)
//		printf("%d ", a);
//	return 0;
//}
//
////�ڶ��ַ���
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 100; a += 2)
//		printf("%d ", a);
//	return 0;
//}

//int main()//switch���  --break�Ӿ�
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}

////��ϰ��
////��д����1-5��ʾ������6-7��ʾ��Ϣ��
//int main()//switch���
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	}
//	return 0;
//}

//��m��n��ֵ
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