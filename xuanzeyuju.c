#include <stdio.h>
#include <stdlib.h>
int main()
{
    int input = 0;//输入的值
    printf("加入比特：>\n");
    printf("那要好好学习码(1/0)?>:");
    scanf("%d\n", &input);
    
    if (input == 1)
        printf("好offer\n");
    else
        printf("卖红薯\n");
    system("pause");
    return 0;
}