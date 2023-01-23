#include<stdio.h>
#define n 10
void display(int a[])
{
    for(int i=0;i<n;i++)
    {
        printf("\n a[%d]: %d",i,a[i]);
    }
}
int main()
{
    int a[n],i;
    for(i=0;i<n;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    display(a);
}