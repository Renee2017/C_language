#include <stdio.h>
#include <limits.h>
/*
unsigned long sizeof(type)
{
	if(type == int)
		return 2;
}
*/
//sizeof()是C语言中的一个运算符，用于获取数据类型或变量的大小（以字节为单位）。
//它可以用于计算基本数据类型（如int、float、char等）或自定义数据类型（如结构体、联合体、数组等）的大小。
unsigned long num=123456789;
//unsigned long类型的大小为8字节，可以表示的最大无符号整数值为$2^{64}-1$，
//即18446744073709551615。这是因为unsigned long类型使用64位（8字节）来存储数据。
void main()
{
unsigned long size = sizeof(int);
printf("int size = %lu\n",size);
printf("存储大小 %lu\n",sizeof(int));
printf("存储大小 %lu\n",sizeof(char));
printf("float存储大小 %lu\n",sizeof(float));
printf("long存储大小 %lu\n",sizeof(long));

printf("num的数据大小为%lu\n",sizeof(num));
return 0
}
