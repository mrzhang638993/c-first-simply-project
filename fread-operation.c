#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//// �ļ�������صĲ���
//int main(void)
//{
//	int a;
//	char str[20]={0};
//	int  result=0;
//	// fread��Ӧ���Ǵ��ļ��ж�ȡ��Ϣ��
//	FILE *pfile=fopen("qwe.txt","r");
//	if (pfile==NULL)
//		{
//				printf("�ļ���ʧ��");
//		}
//		a=errno;   //  ��ȡ�ļ��ɹ�����Ϣ
//		if (a!=0)
//		{
//			printf("�ļ�д���쳣");
//		}
//	//result=fread(str,sizeof(char),11,pfile); //  ��ȡ����sizeof(char)*11����ص��ֽڵġ�
//	//  ѭ����ȡ�Ĳ���
//    //while (a=fread(str,sizeof(char),7,pfile))
//    while (!feof(pfile)) //  û�е����ļ��Ľ�β,�ﵽ�ļ��Ľ�β��Ӧ����Ҫ������ص��߼�����
//	{
//		result=fread(str,sizeof(char),2,pfile);
//		printf("%s",str); // ��ȡ�ļ�����ص�������Ϣ
//		//  ���ݲ���Ļ�����Ӧ�Ļ����е����ݲ�����ȫ��ˢ�µġ���Ҫ��ע
//		//str[20]={0}; //  ��Ҫ����ԭ�������ݵġ�
//		str[0]=0;
//		str[1]=0;
//    }
//	fclose(pfile);  // ��������ļ��ĸ��Ĳ�����
//	//  ����������ȡ������Ӧ�ķ��ص��Ƕ�ȡ���ֽ����ġ�
//	//  ����������: 1.��ȡ��ʱ��û���ַ��Ļ������ص���0��2.
//	//printf("%d\n",result);
//	//printf("%s\n",str);
//	system("pasue");
//	return 0;
//}