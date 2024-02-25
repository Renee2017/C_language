/*switch语句也是一种分支语句。常常用于多分支的情况。
语法形式：
switch(整型表达式)
{
    case 整形常量表达式:
    语句;
}
*/
#include <stdio.h>
int main()
{
int grade;	
printf("请输入你的成绩\n");
scanf("%d",&grade);
grade /= 10;
printf("%d\n",grade);
//如果输入88，grade的值实际上是整数除法的结果，即8，而不是8.8。
//在C语言中，整数除法会截断小数部分，只保留整数部分。因此，当你将88除以10时，结果为8，而不是8.8。
switch(grade)//case后面的值是用于匹配switch语句中的整型表达式的值。
//当switch表达式的值与某个case后面的整型常量表达式相等时，对应的case分支中的语句将被执行。
{
	case 10:
	        printf("满分\n");
                break;//在switch语句中，如果没有在每个case分支的末尾加上break语句，
        //程序会继续执行下一个case分支中的语句，而不会进行分支的跳转。
	case 9:
	        printf("优秀\n");
                break;
	case 8:
	case 7:
	        printf("良好\n");
                break;
        case 6:
                printf("差\n");
                break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
                printf("6\n");
                break;
	default:
	        printf("无效的成绩\n");
       /*当 switch 表达式的值并不匹配所有 case 标签的值时
🌱 这个 default 子句后面的语句就会执行。
🌱 所以，每个switch语句中只能出现一条default子句。
🌱 但是它可以出现在语句列表的任何位置
🌱 而且语句流会像执行一个case标签一样执行default子句。*/ 
}
return 0;
}
