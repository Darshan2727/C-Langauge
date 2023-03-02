#include<stdio.h>
int addition()
{
    int a[7]={2000,500,200,100,50,20,10},i,j,amount;
    printf("enter amount:");
    scanf("%d",&i);
    for (j=0;j<7;j++)
    {
        printf("\n%d notes is:%d",a[j],i/a[j]);
        i=i%a[j];
    }
}
int main()
{
    addition();
}
//..