//变量的作用域和生命周期
//作用域（scope），程序设计概念，通常来说，一段程序代码中所用到的名字并不有效/可用的
//而限定这个名字的可用性的代码范围就是这个名字的作用域。
//局部变量的作用域：就是变量所在的局部范围
//全局变量的作用域：整个工程
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 10;
    printf("%d\n", a);
    system("pause");
    return 0;
}