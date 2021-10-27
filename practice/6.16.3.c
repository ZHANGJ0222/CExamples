#include <stdio.h>
int main(void) 
{
    int row, rank, num;
    char a_z[26];
    for(num = 0; num<=25; num++)
    {
        a_z[num] = num + 65;
    }
    for(row = 1; row < 7; row++)
    {
        printf("%c", a_z[5]);
        for(rank = 1; rank < row; rank++)
            {
                printf("%c", a_z[5-rank]);
            }
        printf("\n");
    }
    getchar();
    return 0;
}