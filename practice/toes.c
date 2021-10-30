#include <stdio.h>
#define SIZE 100000
int main(void)
{
    int A, B, C, D, E, F;
    char a[SIZE] = {0};
    char b[SIZE] = {0};
    char c[SIZE] = {0};
    char d[SIZE] = {0};
    printf("请输入两个非负整数：\n");
    scanf("%s %s", &a, &b);
    D = SIZE - 1;
    E = SIZE - 1;
    for(C = SIZE - 1; C >= 0 ; C--)
    {
        while(a[C]!=0)
        {
            c[D] = a[C];
            a[C] = 0;
            D--;
        }
    }
    for(F = SIZE - 1; F >= 0 ; F--)
    {
        while(b[F] != 0)
        {
            d[E] = b[F];
            b[F] = 0;
            E--;
        }
    }
    E = 1;
    for(D = 0; D <= SIZE - 1; D++)
    {
        while(c[D]+d[D]>0)
        {
            while(c[D]>0 && d[D]>0)
            {
                F = c[D] - 48;
                C = d[D] - 48;
                a[E] = C + F + 48;
                while( F + C >= 10)
                {
                    a[E] = 48 + F + C - 10;
                    a[E-1] += 1;
                        for(A = E-1; A > 0; A--)
                        {
                            while(a[A] > 57)
                            {
                                a[A] = a[A] - 58 + 48;
                                a[A-1] += 1; 
                            }
                            while(a[A-1] != 0 && a[A-1] < 48)
                            {
                                a[A-1] += 48;
                            }
                        }
                    F = 0;
                }
                c[D] = 0;
                d[D] = 0;
                E++;
            }
            while(c[D] > 0 && d[D] == 0)
            {
                F = c[D] - 48;
                a[E] = F + 48;
                c[D] = 0;
                d[D] = 0;
                E++;
            }
            while(c[D] == 0 && d[D] > 0)
            {
                C = d[D] - 48;
                a[E] = C + 48;
                c[D] = 0;
                d[D] = 0;
                E++;
            }
        }
    }
    for(B = 0 ; a[B] == 0; B++)
    {
        a[B] = a[B+1];
        a[B+1] = 0;
    }
    printf("%s", a);
    getchar();
    getchar();
    return 0;
}