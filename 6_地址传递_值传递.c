#include <stdio.h>
void GetByte1(int* j);/*int* j是一个声明语句，用于声明一个名为j的变量，它是一个指向整型（int）的指针。
在C语言中，指针是一种特殊的变量，它存储了一个内存地址，这个地址指向一个整型变量。该地址指向另一个变量的位置。通过使用指针，我们可以间接地访问和操作其他变量。
在这个声明语句中，int*表示j是一个指向整型的指针。*是指针声明符号，用于指示该变量是一个指针*/

//printf("j的地址是%p\n",&j);  
//第六行写法错误，地址本身并没有自己的地址。地址本身是一个标识符，
//用于指示内存中的位置，而不是存储在其他位置的数据。
void GetByte2(int x);
int GetByte3();
void GetByte4();
void GetByte5();


int g=0;
int z=0;

int main()
{
 int i=24;
 int m=666;
 int n=0;
 int g=7;//局部变量g覆盖了全局变量g，使得27行的printf看到的是局部变量g（同名情况下，该函数会优先考虑局部变量）
 printf("i的地址是%p\n",&i);//&i表示获取变量i的地址，%p是printf函数的格式控制符，用于以十六进制形式输出指针的值。
GetByte1(&i);//地址传递,& 运算符用于获取变量的地址
GetByte2(m);//值传递，
n=GetByte3();
GetByte4();//该函数中的g是全局变量

printf("i=%d m=%d n=%d g=%d z=%d ",i,m,n,g,z);

GetByte5();
}

void GetByte1(int* j)//此时j接进来的是i的地址
{
    printf("before j的值是%p,j的地址是%p,j所指向的地址上存储的数值是%d\n",j,&j,*j);
    //要访问指针所指向的值，可以使用解引用操作符*。解引用操作符用于获取指针所指向地址处的值。
    *j = 3;// *j表示查找j地址上存储的值，=3则是将值改为3
    printf("after j的值是%p,j所指向的地址上存储的数值是%d\n",j,*j);
}

void GetByte2(int x)//x是拷贝m的值，此时为666，在此函数定义中x值的变动不影响m的值
{
printf("before x=%d\n",x);
 x = 4;//
 printf("after x=%d\n",x);
}

int GetByte3()
{
 return 5;
}

void GetByte4()
{
g=55;
z=2;

}

void GetByte5()
{
int x=5;
printf("\nx的地址是%p\n",&x);
x=9;
printf("x的地址是%p\n",&x);
printf("请输入");
scanf("%d ",&x);
printf("x的地址是%p\n",&x);
printf("x的值是%d\n",x);


}



