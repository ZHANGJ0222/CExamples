#include <stdio.h>
int main(void)
{
    float inch = 0;
    float cm = 0;
    printf("请输入身高（英寸）：\n");
    scanf("%f", &inch);
    cm = inch * 2.54;
    printf("转换为厘米为：%.2f", cm);
    getchar(); 
    getchar();
    return 0;
}