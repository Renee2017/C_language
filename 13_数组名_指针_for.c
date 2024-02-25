#include<stdio.h>

void printArray(int array[],int size_myArray)
{
    for(int i=0;i<5;i++)
    {
        printf("数组myArray中的第%d个元素为%d\n",i+1,array[i]);//数组名arr被当作指针使用
    }

}
int main()
{
    int myArray[] = {10, 20, 30, 40, 50};
    int size_myArray=sizeof(myArray) /sizeof(myArray[0]);//计算数组长度
    printArray(myArray,size_myArray);//将数组名传递给函数

    return 0;

}