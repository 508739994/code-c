#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////����һ��ѧ��
//struct stu//����ѧ������
//{
//	char name[20];//��Ա����
//	int age;
//	double score;//�ɼ�
//};
////����һ����
//struct Book//
//{
//	char name[30];//����
//	float price;//���
//	char id[30];//���
//};
//
//int main()//�ṹ��
//{
//	//��Ϊһ��ѧ�����ɼ���������ɵģ�������Щ���������ô����Ű�����������
//	struct stu a = { "����",18,89.9 };//�ṹ��Ĵ����ͳ�ʼ��
//	struct Book b = { "��������ԭ��",66,"ISBN978"};//�ṹ��Ĵ����ͳ�ʼ��
//	printf("%s,%d,%lf\n", a.name, a.age, a.score);//�ṹ�����.��Ա����
//	printf("%s,%f,%s\n", b.name, b.price, b.id);
//	return 0;
//}

//struct stu//����һ��ѧ��
//{
//	int age;//��Ա����
//	float weight;
//};
//int main()
//{
//	struct stu a = { 17,66.6 };//�ṹ��Ĵ����ͳ�ʼ��
//	printf("%d,%f", a.age, a.weight);//�ṹ�����.��Ա����
//	//��˼�ǽṹ��������ʳ�Ա��������a��ֵ��ӡ�������ڵ����
//	return 0;	
//}

struct stu//����һ��ѧ��
{
	int age;//��Ա����
	float weight;
};
int main()
{
	struct stu a = { 17,66.6 };//�ṹ��Ĵ����ͳ�ʼ��
	struct stu *pa=&a;
	printf("1: %d,%f\n", a.age, a.weight);
	printf("2: %d,%f\n", (*pa).age, (*pa).weight);
	printf("3: %d,%f\n", pa->age, pa->weight);
	//�ṹ��ָ��->��Ա������
	return 0;
}
