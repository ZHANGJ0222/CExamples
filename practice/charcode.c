#include <stdio.h>
int main(void)
{
    char ch;
    
     printf("请输入字符。\n");
     scanf("%c", &ch);
     printf("%c的代码是%d。\n", ch, ch);

    getchar();
    getchar();
    return 0;
}