#include <stdio.h>
#include <stdlib.h>
//转义字符 --转变了原有意思
//int main()
//{
    //printf("%s\n", "a");
    //printf("c:\test\test.c");
    //printf("ab\ncd");
    //printf("%s\n", "a");
    //printf("%s\n", "\"");
    //printf("%s\n", "\'");
    //printf("c:\\test\\test.c\n");
    //printf("\a\a\a\a");
    //system("pause");
    //return 0;
//}
int main()
{
    printf("%c\n",'\130');//八进制转十进制
    //X  ---ASCII码值是88
    printf("%c\n", '\101');//A
    system("pause");
    return 0;
}