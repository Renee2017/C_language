#include<stdio.h>
//C 语言支持递归，即一个函数可以调用其自身。但在使用递归时，
//程序员需要注意定义一个从函数退出的条件，否则会进入死循环。

int add(int start,int end)
    {
        //return add(start,end-1);//当前的递归调用 return add(start, end-1); 没有停止的条件，导致函数会无限递归
        //下去，最终导致栈溢出。为了修复这个问题，您需要在递归函数中添加一个结束条件，
        //当 end 的值达到某个特定值时停止递归。例如，您可以修改代码如下：
        if (end<=start)
        {
            return start;//递归结束，返回start
        }
        int sum=start+end;
        return sum+add(start+1,end-1);   //递归调用，即函数中调用递增或递减过参数的函数

    }

int main()
{
    int i=1;
    int y=99;
   int result= add(i,y);//定义变量来接其他函数的返回值
    printf("%d\n",result);//用递归计算1-99的加和

    return 0;
}