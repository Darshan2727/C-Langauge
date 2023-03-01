#include<stdio.h>
#define n 5
void display(int a[])
{
    for(int i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }
    printf("\t %d\n%d\n%d\n%d",a[0]+a[1],a[1]+a[2],a[2]+a[3],a[3]+a[4]);
    // printf("\t %d",a[1]+a[2]);
    // printf("\t %d",a[2]+a[3]);
    // printf("\t %d",a[3]+a[4]);
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