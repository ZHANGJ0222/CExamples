#include <stdio.h>
#include <string.h>
int main(void)
{
    int num;
    char ch[100] = {0};
    char out[100] = {0};
    scanf("%s", &ch);
    for(num = 0; num <= strlen(ch); num++)
    {
        out[num] = ch[strlen(ch)-1-num];
    }
    printf("%s", out);
    getchar();
    getchar();
    return 0;
}