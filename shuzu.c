#include <stdio.h>
#include <stdlib.h>
int main()
{
    // int a =1;
    // int b =2;
    // int c =3;
    //......

    //数组--一组相同类型的元素的集合
    //10个整型1-10存起来
    //数组是用下标来访问的
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // char ch[5] = {'a','b','c'};//不完全初始化，剩下的默认为0
    int i = 0;
    while (i < 10)
    {
        printf("%d\n", arr[i]);
        i++;
    }
    system("pause");
    return 0;
}