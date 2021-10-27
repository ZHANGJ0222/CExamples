#include <stdio.h>
int main(void)
{
    int num;
    char a_z[26];
    for(num = 0; num<=25; num++)
    {
        a_z[num] = num + 97;
    }
    printf("%s", a_z);
    getchar();
    return 0;
}