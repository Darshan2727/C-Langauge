#include<stdio.h>
int addition(int i,int j)
{
    if(i<2000 || i>3000)
    {
        printf("\n %d",i);
    }
    else if(j<500 || j>100)
    {
        printf("\n %d",j);
    }
}
int main()
{
    int i,j;
    printf("enter i:");
    scanf("%d",&i);
    printf("enter j:");
    scanf("%d",&j);
    addition(i,j);
}