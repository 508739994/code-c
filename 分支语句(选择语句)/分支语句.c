#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//����֧
	/*int a = 20;
	if (a >= 18)
		printf("����\n");*/

	//˫��֧
	/*int a = 10;
	if (a >= 18)
		printf("����\n");
	else
		printf("δ����\n");*/

	//���֧
	int a = 101;
	if (a < 18)
		printf("δ����\n");
	else if (a >= 18 && a < 26)
		printf("����\n");
	else if (a >= 26 && a < 40)
		printf("����\n");
	else if (a >= 40 && a < 60)
		printf("׳��\n");
	else if (a >= 60 && a <= 100)
		printf("����\n");
	else
		printf("��������\n");
	return 0;
}
