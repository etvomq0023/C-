// 数据类型
//计算机语言-写程序-解决生活问题
//必须有能力描述生活中问题
//价格-15.6  浮点数
//年龄-50   整型

// char  字符数据类型
// ’a' --字符a
// char ch ='a';

// short 短整型
// short num=10;

// int  整型
// int age =20;

//long 长整型
//long long  更长的整型

//float  单精度浮点数
//float weight=55.5

//double 双精度浮点数
//double d=0.0

#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("hello\n");
    printf("%d\n", 100);//打印一个整数
    //sizeof-关键字-操作符-计算类型或者变量所占空间大小
    //计算机中的单位
    //bit-比特位  
    //一个二进制数字“1”占据一个比特位
    //byte-字节-8bit
    //kb-1024byte
    //mb-1024kb
    //gb-1024kb
    //tb-1024gb
    //pb-1024tb
    printf("%c\n", sizeof(char));
    printf("%s\n", sizeof(short));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(long));
    printf("%d\n", sizeof(long long));
    printf("%f\n", sizeof(float));
    printf("%lf\n", sizeof(double));
    //C语言标准  sizeof(long)>=sizeof(int)
    system("pause");
    return 0;
}