//#include <stdio.h>
//#include <stdlib.h>
//int  main(void)
//{
//	const int  a=13;
//	//  const ��������
//	const int b[5]={1,2,3,4,5};
//	//printf("%d\n",a);
//	// a=23;  //  const ���ܱ��޸ĵġ�const�޸ĵı���һ��Ҫ��ʼ�������ġ�
//	int *p=(int *)&a;  //  int�ĵ�ַ��const int*�ĵ�ַ�ģ�ת��Ϊint*��Ӧ�Ĵ��ھ���ġ�
//	int* p1=(int *)&b[0];
//	//printf("%d\n",a);  //  13
//	*p=23;             //  23
//	//b[1]=6;  //  const  ����������Ͳ�����ô�޸��ˡ�
//	*(p1+1)=6;
//	printf("%d\n",a);
//	printf("%d\n",b[1]);// 6 ����ͨ����ַ�����޸Ĳ���
//	system("pause");
//	return 0;
//}