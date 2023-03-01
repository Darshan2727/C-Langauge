#include<stdio.h>
int addition(int a,int n)
{
    for(a=1;a<=n;a++)
    {
        printf("\n %d",a);
    }
}
int main()
{
    int a,n;
    printf("enter n:");
    scanf("%d",&n);
    addition(a,n);
}