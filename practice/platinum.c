#include <stdio.h>
int main(void)
{
    int number, week, day;
    const int BASE = 7;
    printf("请输入天数：\n");
    scanf("%d", &number);
    while(number<0)
    {
        week = number / BASE;
        day = number % BASE; 
        printf("%d天等于%d周%d天\n", number, week, day);
    }
    getchar();
    getchar();
    return 0;

}