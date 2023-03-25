#include <stdio.h>
#include <stdlib.h>
int Add(int x, int y)
{
    int z = 0;
    z = x + y;
    return 0;
}
int main()
{
    int num1 = 0;
    int num2 = 0;
    scanf("%d%d", &num1, &num2);
    //int sum = num1 + num2;
    //函数方式解决
    int sum = Add(num1, num2);
    printf("%d\n", sum);
    system("pause");
    return 0;
}