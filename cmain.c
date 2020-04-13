#include <stdio.h>
#include <stdlib.h>  //  文件不存在的话，对应的打开操作会失败的。
//  引入c3.h文件
//#include "suanshu.h"
#include "shuchu.h"
#include "C:\\Users\\mrzhang\\Documents\\Visual Studio 2010\\Projects\\多文件编程\\c-first-simply-project\\suanshu.h"


int main(void)
{
	printf("%d\n",sum(5,6));
	printf("%d\n",mul(4,5));
	printf("%d\n",devide(5,30));
	printf("%d\n",minus(20,30));
	system("pause");
	return 0;
}