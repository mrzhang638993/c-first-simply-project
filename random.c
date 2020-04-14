//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
////  随机数的使用和逻辑处理的
//int main(int  argc ,char * argv[])
//{
//	int a;
//	int i=0;
//    //随机数种子,对应的产生创建随机数的基准范围。设置随机数产生的基准数.设置了随机数的基准。
//	//srand函数对应的只需要调用一次就可以了。
//	//srand(3u);
//	srand((unsigned int )time(NULL));  // 获取当前系统时间的函数：time()
//	// 产生随机数
//	while(i<10)
//	{
//		//  对应的是在原来的基础上进行随机产生操作的。
//		a=rand();   //  输出结果为48
//		printf("%d\n",a);
//		i++;
//	}
//	system("pause");
//	return 0;
//}