/*三目运算符（ternary operator）通常采用以下语法形式：
condition ? expression1 : expression2
这个表达式的含义是，如果条件（condition）为真，则返回 expression1 的值，否则返回 expression2 的值。
具体来说，当条件为真时，三目运算符返回 expression1 的值；当条件为假时，三目运算符返回 expression2 的值。*/
# include <stdio.h>
int x;
int y;
int main()
{
    printf("请输入x的值：");
    scanf("%d",&x);
    printf("请输入y的值：");
    scanf("%d",&y);
    int z=(x>y)?x:y;
    printf("z的值为%d",z);
}

