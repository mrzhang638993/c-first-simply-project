//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int  main(void)
//{
//	int i=0;
//	int j=0;
//	int k=0;
//	int b[10]={3,12,54,76,897,45,2234,6786,234,124};
//	srand((unsigned int)time(NULL)); // 产生随机数的种子
//	// 应用一：产生指定范围之内的随机数
//	while (i<10)
//	{
//		int a=rand()%79; // 产生随机数，位于0~79之间的随机数
//		printf("%d\n",a);
//		i++;
//	}
//	//  产生位于100~199之间的随机数
//	while (j<10)
//	{
//		int a=rand()%99+100; // 产生随机数，位于100~199之间的随机数
//		printf("%d\n",a);
//		j++;
//	}
//	while (k<20)
//	{
//		int dest=rand()%10;
//		printf("%d\n",b[dest]);
//		k++;
//	}
//	//  随机产生一组数中的一个数，采用数组，进行数组取余的操作的。
//	system("pause");
//	return 0;
//}
