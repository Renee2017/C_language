#include <stdio.h>
#include <time.h>

int main() {
    // 设置起始日期和当前日期
    struct tm start_date = {0};
    struct tm current_date = {0};
    //0 表示将结构体 start_date 的所有成员初始化为零值。
//结构体 struct tm 是用于表示日期和时间的结构体，它包含了多个成员，如年、月、日、时、分、秒等。
//在 C 语言中，如果在定义结构体变量时使用花括号 {} 进行初始化，并将其中的值设为 0，则会将结构体的所有成员初始化为零值。

    // 设置起始日期
    start_date.tm_year = 2022 - 1900; // 年份要减去1900
    start_date.tm_mon = 10 - 1; // 月份从0开始，所以要减去1
    start_date.tm_mday = 15;

    // 获取当前日期
    time_t now = time(NULL);//time()函数的类型是time_t。time_t是一个整数类型，
    //通常用于表示从1970年1月1日以来经过的秒数。time()函数返回当前时间的时间戳，即从1970年1月1日到当前时间的秒数。
    printf("当前时间戳为%ld",now);
    current_date = *localtime(&now);//函数localtime将时间戳转换为包含年月日的结构体
 //localtime()是一个C标准库函数，用于将时间戳转换为本地时间的结构体表示。
 //它接受一个指向time_t类型的指针作为参数，并返回一个指向struct tm类型的结构体指针。
    printf("current_year是%d，current_mon是%d,current_mday是%d",current_date.tm_year+1900,current_date.tm_mon,current_date.tm_mday );


    // 使用mktime函数将日期转换为秒数，然后计算天数差
    time_t start_time = mktime(&start_date);//mktime函数用于将给定的时间信息转换为对应的 Unix 时间戳。
    time_t current_time = mktime(&current_date);
    printf("%ld",current_time);
    double diff_time = difftime(current_time, start_time);
    //difftime 是一个 C 标准库函数，用于计算两个时间之间的差异，返回以秒为单位的时间差。
    int diff_days = (int)(diff_time / (60 * 60 * 24));

    printf("情侣在一起已经%d天\n", diff_days);

    return 0;
}