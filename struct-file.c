//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
////  定义结构体变量
//struct Node
//{
//	int      Num;
//	char     name[10];
//	double   hig;
//	short    age;
//};
//int  main(void)
//{
//	struct Node no1;
//	struct Node no={123,"c3",190,28};
//	FILE *pfile=fopen("qwe.txt","r");
//	//  对应的执行相关的数据逻辑
//	//fwrite(&no,sizeof(no),1,pfile);  //  结构体数据写入到文件
//	fread(&no1,sizeof(no),1,pfile);
//	// 开始读取数据
//	fclose(pfile);
//	printf("%d\n",no1.age);
//	printf("%d\n",no1.Num);
//	printf("%s\n",no1.name);
//	printf("%.2lf\n",no1.hig);
//	system("pause");
//	return 0;
//}