//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
////  �ļ��Ķ�д����,��д�ļ���Ӧ����һ���ļ��ġ�
////  fwrite �� fread  
////  fputs ��  fgets
////  fprintf()  ��  fscanf()
//int main(void)
//{
//	int a;
//	char *str="hello C3~\r\n";  //����c3���ַ�����Ϣ
//	char *str1="good  morning";
//	FILE *pfile=fopen("qwe.txt","wb");  //���·�����ļ�,�ı�ģʽ�򿪡�w��Ӧ���ǲ���д��a��Ӧ����׷��д����
//	if (pfile==NULL)
//	{
//		printf("�ļ���ʧ��");
//	}
//	a=errno;   //  ��ȡ�ļ��ɹ�����Ϣ
//	if (a!=0)
//	{
//		printf("�ļ�д���쳣");
//	}
//	fwrite(str,sizeof(char),strlen(str)+1,pfile);  //  ע����Ҫ��1�ģ���һ�Ļ��ſ��Խ�\0д�뵽�ļ��еġ�
//	fwrite(str1,sizeof(char),strlen(str1)+1,pfile);
//	fclose(pfile);  //  �ر��ļ����޸ı��浽�ļ��еġ�
//	system("pause");
//	return 0;
//}