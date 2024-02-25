/*题目：有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
程序分析：可填在百位、十位、个位的数字都是 1、2、3、4，组成所有的排列后再去掉不满足条件的排列。*/

#include<stdio.h>

int i, k,j;
int count=0;
int main()
{
    
    for ( i = 1; i < 5; i++)
    {
        for ( k = 1; k< 5; k++)
        {
            for (j= 1;j< 5; j++)
            {
                if (i!=k&&i!=j&&k!=j)
                {
                    count++;
                    printf("%d%d%d\n",i,k,j);
                
                }
            }
            
        }
        
    }
    printf("一共可以组成%d个数",count);
    return 0;
}