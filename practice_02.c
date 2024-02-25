/*题目：有 1、4、7、9 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
程序分析：可填在百位、十位、个位的数字都是 1、2、3、4，组成所有的排列后再去掉不满足条件的排列。*/

#include<stdio.h>

int array[4]={1,4,7,9};


int a,b,c;

int main()
{
    for(int i=0;i<4;i++)
    {
        a=array[i];
        for ( int j = 0; j < 4; j++)
        {
            b=array[j];
            
            for(int k=0;k<4;k++)
            {
                c=array[k];
                if (a!=b&&a!=c&&b!=c)
                {
                    printf("%d%d%d\n",a,b,c);
                }    
            }
        }
        

    }

}