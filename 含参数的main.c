//#include <stdio.h>
//#include <stdlib.h>
////  参数名称是无所谓的。
////  char*  argv[]对应的是字符串的指针。
//int main(int argc,char*  argv[])  //  argc对应的是命令行的参数的个数，后面的参数对应的是参数具体的内容的。每一个参数对应的都是字符串处理的。
//{
//	//  默认的第一个参数是文件路径。参数总数=1+传递的参数个数。
//	int i=0;
//	for(i=0;i<argc;i++)
//	{
//        printf("%s\n",argv[i]);  
//	}
//	//  argv[0] 对应的是项目软件的路径的。
//	//printf("%d\n",argc);  // 对应的打印文件的参数
//	//printf("%s\n",argv[0]);  //  当前软件的绝对路径
//	//printf("%s\n",argv[1]);  // 传递的额外的参数的
//	//printf("%s\n",argv[2]);  // 对应的是额外的参数的。
//	//  可以使用循环的方式来打印参数的。
//	system("pause");
//	return 0;
//}