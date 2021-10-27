#include <stdio.h>
int main(void)
{
    int row, rank;
    char ch = 36;
    for(row = 1; row < 6; row++)
    {
        printf("%c", ch);
        for (rank = 1; rank < row; rank++)
            {
                printf("%c", ch);
            }
        printf("\n");
    }
    getchar();
    return 0;
}