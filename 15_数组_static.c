#include <stdio.h>
int staticArray[]={11,22,33,44,55};
int length=sizeof(staticArray)/sizeof(staticArray[0]);
int main()
{
    
    for (int i = 0; i < length; i++)
    {
        printf("静态数组的每个元素分别为:%d",staticArray[i]);
    }

    

    return 8;
}