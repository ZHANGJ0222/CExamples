#include <stdio.h>
int main(void)
{
    float inch = 0;
    float cm = 0;
    printf("��������ߣ�Ӣ�磩��\n");
    scanf("%f", &inch);
    cm = inch * 2.54;
    printf("ת��Ϊ����Ϊ��%.2f", cm);
    getchar(); 
    getchar();
    return 0;
}