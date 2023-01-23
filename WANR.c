#include<stdio.h>
int addition(int a)
{
   if(33<=a)
    {
        printf("student pass");
    }
    else
    {
        printf("student na-pass");
    }
}
int main()
{
    int a,b;
    printf("enter marks:");
    scanf("%d",&a);
    
    addition(a);
}