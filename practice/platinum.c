#include <stdio.h>
int main(void)
{
    int number, week, day;
    const int BASE = 7;
    printf("������������\n");
    scanf("%d", &number);
    while(number<0)
    {
        week = number / BASE;
        day = number % BASE; 
        printf("%d�����%d��%d��\n", number, week, day);
    }
    getchar();
    getchar();
    return 0;

}