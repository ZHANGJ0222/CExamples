#include<stdio.h>
int main(void)
{

    int ch = 0;
    printf("请输入ASCII码值。\n");
    scanf("%d", &ch);
    printf("对应字符是%c", ch);
    getchar();
    getchar();
    return 0;
}