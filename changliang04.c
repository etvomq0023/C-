//常量
#include <stdio.h>
#include <stdlib.h>
/*#define MAX 10000
//int main()
//{
    // 1.字面常量
    // 3.14；
    // 10；
    //'a';
    //"abcd";

    //2.const修饰的常变量
    //const int num = 10;//num 常变量-具有常属性（不能被改变的属性）
    //printf("num = %d\n", num);

    //int arr[10] = {0};//10个元素
    //const int n = 10;
    //int arr2[n] = {0};//n是变量

    //3.#define 定义的标识符常量
   int n = MAX;
    //MAX =20000 err 
    printf("n=%d\n", n);*/

    //性别
enum Sex
{
    // 这种枚举变量的未来可能取值
    //枚举常量
    MALE=3,//赋初值
    FEMALE,
    SECRET
};

int main()
{
    //4.枚举常量
    //可以一一列举的常量

    enum Sex s = MALE;
    // MALE = 3;err
    printf("%d\n", MALE);
    printf("%d\n", FEMALE);
    printf("%d\n", SECRET);
    system("pause");
    return 0;
}   
   

