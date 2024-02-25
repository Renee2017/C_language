/*题目：企业发放的奖金根据利润提成。

利润(I)低于或等于10万元时，奖金可提10%；
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
20万到4020万元的部分，万之间时，高于可提成5%；
40万到60万之间时高于40万元的部分，可提成3%；
60万到100万之间时，高于60万元的部分，可提成1.5%；
高于100万元时，超过100万元的部分按1%提成。
从键盘输入当月利润salary，求应发放奖金总数？

程序分析：请利用数轴来分界，定位。注意定义时需把奖金定义成双精度浮点(double)型。*/

#include<stdio.h>

int i;
double bonus,bonus0,bonus1,bonus2,bonus3,bonus4,bonus5;
int main()
{
    double salary;
    scanf("%lf",&salary);//%lf是用于读取double类型的输入的格式化字符串

    bonus0=salary*0.1;
    bonus1=10*0.1;
    bonus2=bonus1+(20-10)*0.075;
    bonus3=bonus1+(40-20)*0.05;
    bonus4=bonus2+(60-40)*0.03;
    bonus5=bonus3+(100-60)*0.015;

    i=salary/10;
    switch(i)
    {
        case 0:
            bonus=bonus0;
            printf("员工奖金为%lf",bonus);
            break;
        case 1:
            bonus=bonus1+(salary-10)*0.075;
            printf("员工奖金为%lf",bonus);
            break;
        case 2:
        case 3:
            bonus=bonus2+(salary-20)*0.05;
            printf("员工奖金为%lf",bonus);
            break;
        case 4:
        case 5:
            bonus=bonus3+(salary-40)*0.03;
            printf("员工奖金为%lf",bonus);
            break;
        case 6:
        case 7:
        case 8:
        case 9:
            bonus=bonus4+(salary-60)*0.015;
            printf("员工奖金为%lf",bonus);
            break;
        default:
            bonus=bonus5+(salary-100)*0.01;
            printf("员工奖金为%lf",bonus);
            break;

    }
}
