#include <stdio.h>
#include <stdlib.h>
//  引入c3.h文件
#include "suanshu.h"
#include "shuchu.h"

int main(void)
{
	printf("%d\n",sum(5,6));
	printf("%d\n",mul(4,5));
	printf("%d\n",devide(5,30));
	printf("%d\n",minus(20,30));
	system("pause");
	return 0;
}