#include <stdio.h>
int main(void)
{
    float i;
    printf("������һ��������:\n");
    scanf("%f", &i);
    printf("С������ʽ��%f\n", i);
    printf("ָ����ʽ��%e\n", i);
    printf("ʮ�����Ƽ�������%.2a\n", i);
    getchar();
    getchar();
    return 0;
}