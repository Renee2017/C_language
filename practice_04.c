//题目：输入某年某月某日，判断这一天是这一年的第几天？

#include<stdio.h>

int time[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{   
    while(1){
    int year,month,date;
    printf("请输入年份、月份和几号");
    scanf("%d %d %d",&year,&month,&date);

    if (year%400==0||year%4==0&&year%100!=0)//处理闰年的情况
    {
        time[1]=29;
    }

    if(month>12||date>31)
    {
        printf ("输入错误，请重新输入"); 
        continue; //continue语句跳过当前循环，要求用户重新输入。只有当输入正确时，才会跳出循环，结束程序。
    //continue是C语言中的一个控制流语句，用于跳过当前循环中剩余的代码，并开始下一次循环。
    //请注意，continue语句只能在循环体内使用，通常与条件语句结合使用，用于跳过特定的迭代。
    
    }
    else if (month==2&&date>29)
        {
            printf ("输入错误,请重新输入");
            continue;
        }

    int countday=0;
    for (int i = 0; i < (month-1); i++)
    {
        countday+=time[i];
    }
    
    int totalday=countday+date;

    printf("现在是%d年的第%d天/n",year,totalday);
    break;//输入正确，跳出循环
    //break是C语言中的一个控制流语句，用于跳出当前所在的循环或开关语句。
//当break语句执行时，程序将立即终止当前所在的循环或开关语句，并开始执行该语句后的下一行代码。
    }
    
    return 0;
}