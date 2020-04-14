//#include <stdio.h>
//#include <stdlib.h>
//
//// const  修饰指针变量
//int main(void)
//{
//	//int a=13;
//	//int b=24;
//	//const  int *p=&a; // 存在隐式的类型转换操作。const修饰了*p的，所以*p是不能修改的。
//	//*p=34;   *p被 const修饰了，对应的是不能进行修改的。
//	//p=&b; //  p对应的是可以修改的。
//	//printf("%d\n",*p);  //  24
//
//
//	int a=20;
//	int b=12;
//	int *  const p=&a;  //  *p是可以修改的，p是无法修改的。具体的需要看const修饰的是谁，修饰谁的话，谁就不可以变化的。
//	//*p=23;  
//	//p=&b;
//	const  int * const p;  // 对应的p以及*p都被const修饰了，都是无法改变的。
//	system("pause");
//	return 0;
//}