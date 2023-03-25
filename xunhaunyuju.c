#include <stdio.h>
#include <stdlib.h>
//30000 代码 好offer
int main()
{
    //while 循环
    int line = 0;
    while (line<300000)
    {
        printf("写代码:%d\n",line);
        line++;
    }
    if (line == 300000)
    {
        printf("好offer\n");
    }
    system("pause");
    return 0;
}