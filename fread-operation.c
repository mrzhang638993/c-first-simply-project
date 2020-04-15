#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//// 文件读的相关的操作
//int main(void)
//{
//	int a;
//	char str[20]={0};
//	int  result=0;
//	// fread对应的是从文件中读取信息的
//	FILE *pfile=fopen("qwe.txt","r");
//	if (pfile==NULL)
//		{
//				printf("文件打开失败");
//		}
//		a=errno;   //  获取文件成功码信息
//		if (a!=0)
//		{
//			printf("文件写入异常");
//		}
//	//result=fread(str,sizeof(char),11,pfile); //  读取的是sizeof(char)*11个相关的字节的。
//	//  循环读取的操作
//    //while (a=fread(str,sizeof(char),7,pfile))
//    while (!feof(pfile)) //  没有到达文件的结尾,达到文件的结尾对应的需要进行相关的逻辑处理。
//	{
//		result=fread(str,sizeof(char),2,pfile);
//		printf("%s",str); // 读取文件的相关的配置信息
//		//  数据不足的话，对应的缓存中的数据不能完全的刷新的。需要关注
//		//str[20]={0}; //  需要擦除原来的内容的。
//		str[0]=0;
//		str[1]=0;
//    }
//	fclose(pfile);  // 保存对于文件的更改操作。
//	//  处理结果，读取操作对应的返回的是读取的字节数的。
//	//  处理结果描述: 1.读取的时候没有字符的话，返回的是0；2.
//	//printf("%d\n",result);
//	//printf("%s\n",str);
//	system("pasue");
//	return 0;
//}