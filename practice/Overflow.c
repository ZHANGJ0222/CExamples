#include <stdio.h>
#include <string.h>
int main(void)
{
    char X[10];
    printf("«Î ‰»Î–’√˚£∫\n");
    scanf("%s", X);
    printf("\"%s\"\n", X);
    printf("\"%20s\"\n", X);
    printf("\"%-20s\"\n", X);
    printf("\"%*s\"\n", strlen(X)+3, X);
    getchar();
    getchar();
    return 0;

}