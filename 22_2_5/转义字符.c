#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()// \? --����ĸ��
//{
//	printf("are you ok??)");
//		return 0;
//}

//int main()// \' --��ӡ������
//{
//	printf("%c\n", '\'');
//	return 0;
//}

//int main()// \" --��ӡ˫����
//{
//	printf("%s\n", "\"");
//	return 0;
//}

//int main()//  \\ --��ӡ��б��\
//
//{
//	printf("\\");// -- \\ת�����Ϊ\  
//	//��б�ܱ�����������ʾת���ַ��Ŀ�ͷ
//	return 0;
//}

//int main()//  \a --����
//{
//	printf("\a");// --\a ����
//	return 0;
//}

//int main()// \b �˸��
//{
//	printf("%s\b", "BBB");//�൱�ڰ�һ���˸����Backspace��
//	return 0;
//}

//int main()  //  \f--��ҳ���������һҳ��ͷ
// 
//{
//	printf("Hello\favc");
//	//�൱��Word��дhello�ڵڶ�ҳ��дavc
//	//ִ�иó����Ҳ��Բ�����
//	return 0;
//}

//int main()// \n --����
//{
//	printf("%s\n", "\"");
//	return 0;
//}

//int main()//  \r --��ǰλ���������п�ͷ
//{
//	printf("deadad\rabd");
//	//��Ϊ\rռһ���ַ������ַ�����abռ�����ַ�
//	//zb��ǰ�ַ���ռ�Ŀո��ں������dad
//
//	//Ϊʲôֻ��ӡdad
//	//��Ϊ\rab��ռ�����ַ���deadadҪ����ǰ�������ַ�
//	//����ab dad
//
//	return 0;
//}

//int main()// \t- ˮƽ�Ʊ��
//{
//	//printf("C:\text\text.c");
//	printf("ab\ncd");
//	return 0;
//}

//int main()// \v--��ֱ�Ʊ��  ���ӦΪ
////                         Hello
////                              avc
////���ڵı�������಻֧��
//{
//	printf("Hello\vavc");
//	return 0;
//}

//int main()  // \0- \0�����ֵΪ��
//{
//	printf("Hello\0avc");//ִ�иó���\0������ַ���ʾΪ��
//	return 0;
//}

//int main() // \ddd
//{
//	printf("%c\n", '\101');
//	//%c-��ӡ�����ַ� \n��ʾ��ӡ���� 
//	//101��8����ת��Ϊʮ������65
//	//��ASCII������65������Ǵ�дA
//	return 0;
//}


//int main()  //\xhh --ʮ������������������ַ�
//{
//	printf("%c\n", '\x30');
//	return 0;
//	// \x30��ʾʮ������ʮ����Ϊ48
//	//��%c��ӡ����ASCII����λ��48���ַ�0
//
//}

//����
//��������ַ�����
//int main()
//{
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}
//��14���ַ�
//c: \test \32 8  \t est.c 
//2   1 3  1   1   1  5
//\t��һ���ַ� \32��һ���ַ�  ��8���ǰ˽��Ƶ�����

int main()
{
	printf("are you ok??)");//����ĸ��
	printf("%c\n", '\'');// \' --��ӡ������
	printf("%s\n", "\"");//��ӡ˫����
	printf("\\");// -- \\ת�����Ϊ\
	printf("\a");// --\a ����
	printf("%s\b", "BBB");//�൱�ڰ�һ���˸����Backspace��
	printf("Hello\favc");//--\f--�൱��Word��дhello�ڵڶ�ҳ��дavcִ�иó����Ҳ��Բ�����
	printf("%c\n", '\101');//����
	printf("deadad\rabd");//-\r- ��Ϊ\rռһ���ַ������ַ�����abռ�����ַ�zb��ǰ�ַ���ռ�Ŀո��ں������dad
	printf("C:\text\text.c");// \t- ˮƽ�Ʊ��
	printf("Hello\vavc");//-\v- ��ֱ�Ʊ��
	printf("Hello\0avc");// \0- \0�����ֵΪ��
	printf("%c\n", '\101');// \ddd
	printf("%c\n", '\x30');//\xhh --ʮ������������������ַ�
	return 0;
}




