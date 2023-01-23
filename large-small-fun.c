#include<stdio.h>
#define n 5
void display(int a[])
{
    for(int i=0;i<n;i++)
    {
        printf("\n a[%d]: %d",i,a[i]);
    }
    for(int i=1;i<n;++i)
    {
        if(a[0]<a[i])
        {
            a[0]=a[i];
        }
    }
    printf("\n largest number is:%d",a[0]);
    for(int i=1;i<n;++i)
    {
        if(a[0]>a[i])
        {
            a[0]=a[i];
        }
    }
    printf("\n smalest number is:%d",a[0]);
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