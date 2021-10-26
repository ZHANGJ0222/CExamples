#include <stdio.h>
int main(void)
{
    float i;
    printf("请输入一个浮点数:\n");
    scanf("%f", &i);
    printf("小数点形式：%f\n", i);
    printf("指数形式：%e\n", i);
    printf("十六进制计数法：%.2a\n", i);
    getchar();
    getchar();
    return 0;
}