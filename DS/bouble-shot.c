#include <stdio.h>
#include <stdlib.h>
#define n 10
int bouble(int a[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int a[n];
    printf("Unsorted array:");
    for (int i = 0; i < n; i++)
        a[i] = rand() % 15;
    for (int i = 0; i < n; i++)
        printf(" %d", a[i]);

    bouble(a);
    printf("\n sorted array:");
    for (int i = 0; i < n; i++)
        printf(" %d", a[i]);
}
