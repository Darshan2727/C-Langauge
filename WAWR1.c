#include<stdio.h>
int addition(int a)
{
    return a;
}
int main()
{
    int a,n;
    printf("enter n:");
    scanf("%d",&n);
    for(a=1;a<=n;++a)
     {
         printf("\n %d",a);
     } 
    printf("%d",addition(a));
}
