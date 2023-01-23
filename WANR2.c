#include<stdio.h>
int addition(int a,int b,int c)
{ 
 if(a>b && a>c)
    {
        printf("largest number is: %d",a);
    }
    else if(b>c)
        {
            printf("largest number is: %d",b);
        }
        else
        {
            printf("largest number is: %d",c);
        }
}
int main()
{
    int a,b,c;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter c:");
    scanf("%d",&c);
    addition(a,b,c);
}