#include <stdio.h>
int main(void)
{
    int MAX,MIN,num,sum;
    printf("请输入一个上限整数与下限整数：");
    scanf("%d %d", &MAX, &MIN);
    sum = 0;
    while(MAX>MIN) 
    {
        for(num = MIN + 1; num < MAX; num++)
        {
            sum = sum + num * num;
        }
        printf("上限整数与下限整数之间所有整数平方和：%d\n", sum);
        printf("请输入一个上限整数与下限整数：");
        scanf("%d %d", &MAX, &MIN);
        sum = 0;
    }
    printf("将退出。");
    getchar();
    getchar();
    return 0;
}