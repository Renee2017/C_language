#include<stdio.h>
#include<stdlib.h>/*包含用于动态分配内存空间的函数
free()：用于释放动态分配的内存空间。
calloc()：用于动态分配并初始化内存空间。
realloc()：用于重新分配动态分配的内存空间的大小。
此外，stdlib.h 还定义了一些类型，如 size_t、div_t、ldiv_t 等。*/



//malloc 和 calloc 函数在传递参数时有一些区别。
//malloc 函数的参数是要分配的内存空间的字节数。
//calloc 函数的参数是要分配的元素数量和每个元素的大小。

int main()
{
    int size=5;
    int *dynamicArray=(int*)calloc(size,sizeof(int));
    //int *dynamicArray=(int*)malloc(size*sizeof(int));
    /*int* 表示类型转换。malloc/calloc 函数的返回类型是 void*，它指向分配的内存空间的起始地址。
    然而，在这个特定的代码行中，我们希望将返回的 void* 指针转换为 int* 类型的指针，以便我们可以
    将其赋值给 dynamicArray 变量。类型转换 (int*) 告诉编译器将 void* 指针转换为 int* 类型的指针。*/

    if (dynamicArray==NULL)//NULL 是一个宏定义，表示空指针。
    {
        printf("空间分配失败");
        return 1;//（或其他非零值）：通常表示程序异常结束或出现错误。
    }
    
    printf("请输入%d个元素",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&dynamicArray[i]);
    }

    printf("该数组的元素分别为：");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",dynamicArray[i]);
    }

    free(dynamicArray); // 动态数组内存释放
    dynamicArray = NULL;//建议将指针 dynamicArray 设置为 NULL，以避免出现悬空指针
    
    return 0;//通常表示程序正常结束。当 main 函数中的 return 语句返回 0 时，
    //它表示程序成功执行并顺利退出。这是约定俗成的惯例，用于表示程序的正常执行状态。


}
