#include <stdio.h>
int main(void)
{
    int array[8], num;
    printf("������8������\n");
    for(num = 0; num <= 7; num++)
    {
        scanf("%d", &array[num]);
    }
    for(num = 7; num >= 0; num--)
    {
        printf("%d ", array[num]);
    }
    getchar();
    getchar();
    return 0;
}