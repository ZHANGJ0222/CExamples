#include <stdio.h>
int main(void)
{
    int MAX,MIN,num,sum;
    printf("������һ����������������������");
    scanf("%d %d", &MAX, &MIN);
    sum = 0;
    while(MAX>MIN) 
    {
        for(num = MIN + 1; num < MAX; num++)
        {
            sum = sum + num * num;
        }
        printf("������������������֮����������ƽ���ͣ�%d\n", sum);
        printf("������һ����������������������");
        scanf("%d %d", &MAX, &MIN);
        sum = 0;
    }
    printf("���˳���");
    getchar();
    getchar();
    return 0;
}