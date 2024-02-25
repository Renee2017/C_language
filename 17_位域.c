#include <stdio.h>

struct packed_struct 
{
   unsigned long f1 : 1;   // 1位的位域
   unsigned int f2 : 1;   // 1位的位域
   unsigned int f3 : 1;   // 1位的位域
   unsigned int f4 : 1;   // 1位的位域
   unsigned int type : 4; // 4位的位域
   unsigned int my_int : 9; // 9位的位域
};

int main() 
{
   struct packed_struct pack;

   pack.f1 = 2;//2用2进制表示是10，是两位，不符合位域中对于f1的定义，只能保持一位，所以打印结果是1
   pack.f2 = 0;
   pack.f3 = 1;
   pack.f4 = 0;
   pack.type = 7;
   pack.my_int = 25;

   printf("f1: %u\n", pack.f1);
   printf("f2: %u\n", pack.f2);
   printf("f3: %u\n", pack.f3);
   printf("f4: %u\n", pack.f4);
   printf("type: %u\n", pack.type);
   printf("my_int: %u\n", pack.my_int);
   printf("变量pack的内存大小为%d",sizeof(pack));
   return 0;
}