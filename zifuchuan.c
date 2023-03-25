//字符串就是一串字符--用双引号括起来的一串字符
   //"abcdef"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //字符数组-数组是一组相同类型的元素
    //字符串在结尾的位置隐藏了一个\0的字符
    //\0是字符串的结束标志
    //char arr[] = "hello";
    char arr1[] = "abc";
    char arr2[] = {'a', 'b', 'c','\0'};
    //求字符串长度
    printf("%d\n", strlen(arr1));
    printf("%d\n", strlen(arr2));

    //int len = strlen("abc");
    //printf("%d\n", len);
    //printf("%s\n", arr1);
    //printf("%s\n", arr2);
    system("pause");
    return 0;
}
    