//#include <stdio.h>
//#include <stdlib.h>
//int  main(void)
//{
//	const int  a=13;
//	//  const 修饰数组
//	const int b[5]={1,2,3,4,5};
//	//printf("%d\n",a);
//	// a=23;  //  const 不能被修改的。const修改的变量一定要初始化操作的。
//	int *p=(int *)&a;  //  int的地址是const int*的地址的，转化为int*对应的存在警告的。
//	int* p1=(int *)&b[0];
//	//printf("%d\n",a);  //  13
//	*p=23;             //  23
//	//b[1]=6;  //  const  修饰了数组就不能这么修改了。
//	*(p1+1)=6;
//	printf("%d\n",a);
//	printf("%d\n",b[1]);// 6 可以通过地址进行修改操作
//	system("pause");
//	return 0;
//}