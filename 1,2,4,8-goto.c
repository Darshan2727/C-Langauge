#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("enter n:");
    scanf("%d", &n);
table:
    if (i <= 100)
    {
        printf("\n%d", i);
        i *= 2;
        goto table;
    }
}