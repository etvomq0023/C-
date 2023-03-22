#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main()
{
    float radius;
    float s, c;
    printf("输入半径：");
    scanf("%f", &radius);
    s = PI * radius * radius;
    c = 2 * PI * radius;
    printf("面积:%.2f\n", s);
    printf("面积:%.2f\n", c);

    system("pause");
    return 0;
}