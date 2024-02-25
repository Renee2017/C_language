#include <stdio.h>


//编译时将当前文件和含有外部全局变量x、y的文件一起编译：gcc 4_extern.c 4_extern1.c -o 4_extern.out
extern int x;//extern是一个关键字，用于声明一个全局变量或函数，表示该变量或函数是在其他文件中定义的。

int main()
{
extern int y;
int result=x+y;
printf("result为 %d\n",result);
return 0;
}
