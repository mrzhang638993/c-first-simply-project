#include "shuchu.h"  // 将函数声明书写到前面的话，可以避免文件内部函数之间相关调用的顺序问题。
#include "suanshu.h"
int minus(int a,int b)
{
	struct  C3  d;
	d.a=23;  // 使用结构提赋值和相关操作。
	return b-a;
}
int devide(int a,int b)
{
	return b/a;
}
