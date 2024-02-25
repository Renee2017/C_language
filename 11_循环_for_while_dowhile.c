#include<stdio.h>
int main()
{
    //int x;
    for(int x=0;x<5;)//
    {
        printf("for循环中x的值为%d\n",++x);//如果你希望在循环体内使用更新后的值，可以选择前置递增。
        //如果你希望在循环体内使用更新前的值，可以选择后置递增。
        //这里使用了前置递增，所以打印出来的第一个值是1,如果这里使用后置递增，则打印出来的第一个值是0
    }
    
    int x=0;
    while(x<5)
    {
        printf("while循环中x的值为%d\n",x++);
       // x++;
    }

    x=5;
    do
    {
        printf("do while循环中x的值为%d\n",++x);
    } while (x<5);
    return 0;

}