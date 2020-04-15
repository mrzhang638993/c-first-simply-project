//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
////  文件的读写操作,读写文件对应的是一对文件的。
////  fwrite 和 fread  
////  fputs 和  fgets
////  fprintf()  和  fscanf()
//int main(void)
//{
//	int a;
//	char *str="hello C3~\r\n";  //保存c3的字符串信息
//	char *str1="good  morning";
//	FILE *pfile=fopen("qwe.txt","wb");  //相对路径打开文件,文本模式打开。w对应的是擦除写，a对应的是追加写操作
//	if (pfile==NULL)
//	{
//		printf("文件打开失败");
//	}
//	a=errno;   //  获取文件成功码信息
//	if (a!=0)
//	{
//		printf("文件写入异常");
//	}
//	fwrite(str,sizeof(char),strlen(str)+1,pfile);  //  注意需要加1的，加一的话才可以将\0写入到文件中的。
//	fwrite(str1,sizeof(char),strlen(str1)+1,pfile);
//	fclose(pfile);  //  关闭文件将修改保存到文件中的。
//	system("pause");
//	return 0;
//}