#include <stdio.h>
int main(void)
{
    int row, rank, num;
    char ch;
    scanf("%c", &ch);
    for(row = 1; row <= 5; row++) 
    {
        for(rank=1; rank <= 5 - row; rank++)
        {
            printf(" ");
        }
        for(num = 1; num <= 9-2*(rank-1)-(row-1); num++)
        {
            while(rank <= 5)
            {
                printf("%c", ch - ( 5 - num ));
                rank++;
                num++;
            }
            while(num<=9-2*(5-row))
            {
                printf("%c", ch + (row-rank));
                rank++;
                num++;
            }
        }
        printf("\n");
    }   
    getchar();
    getchar();
    return 0;
}