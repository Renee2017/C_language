#include <stdio.h>

int main()
{
int continuequery=1;

int grade;

while (continuequery=5)//while循环的参数是一个条件表达式，它决定了循环是否执行。条件表达式的值为真（非零）时，循环会执行；
//条件表达式的值为假（零）时，循环会终止。条件表达式可以是任何能够产生布尔值（真或假）的表达式，
//例如比较表达式、逻辑表达式或函数调用等.
//在条件判断中，当使用一个非零的整数作为条件时，它被视为真。
//因此，while (continuequery) 中的 continuequery 变量的值为非零（例如1），循环将执行。
{
     printf("请输入你的成绩: ");
    scanf("%d",&grade);
    int level=(grade/10);
    switch(level)
    {
        case 10:
            printf("Excellent\n");
            break;
        case 9:
            printf("Great\n");
            break;
        case 8:
            printf("good\n");
            break;
        case 7:
        case 6:
            printf("not very good\n");
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("try more\n");
            break;
        default:
            printf("please input again\n");
            break;
    }
    printf("是否继续查询，继续请输入0，终止请输入1:");
    scanf("%d",&continuequery);
}  
printf("查询结束\n");
return 0;
}