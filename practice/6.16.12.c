#include <stdio.h>
int main(void)
{
    int num, a;
    double add, sub, sum, d;
    while(scanf("%d", &num)==1)
    {
        for(a = 1, d = 1.0, sub = 0, add = 0, sum = 0; a <= num; a++, d++)
        {
            add = add + 1 / d;
            if(a % 2 ==0)
            sub = sub - 1 / d;
            else
            sub = sub + 1 / d;
        }
        sum = add + sub;
        printf("%lf\n", sum);
    }
    getchar();
    getchar();
    return 0;
}