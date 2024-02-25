/*此代码是错误示范：你使用了多个 if 语句来判断成绩的等级。这样会导致每个条件都被检查，
而不是只检查符合条件的部分,else只和相邻的if对应。为了避免这种情况，你可以使用 else if 来连接多个条件。
使用 if-else if-else 结构来判断成绩的等级。只有符合条件的第一个分支会被执行，而不会检查后续的条件。*/
#include <stdio.h>
int main()
{
int grade;
int g;
printf("请输入成绩");
scanf("%d",&grade);
g=grade;
printf("\n");
if(g>90)
 {
  printf("A\n");
 }	
 if(90>=g && g>=80)
  {
   printf("A-\n");	 
  } 
   if(80>g && g>=70) 
     {
     printf("B\n");	     
     }
else//else只和相邻的if对应
  {
  printf("C\n");	  
  }	
//return 0;



    int num;

    printf("请输入一个整数：");
    scanf("%d", &num);

    if (num > 0) {
        printf("这是一个正数。\n");
    } else {
        printf("这不是正数。\n");
    }

    return 0;

}


