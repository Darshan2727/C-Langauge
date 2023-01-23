#include<stdio.h>
int fact(int n)
{
     int a=0,b=1,c,k;
    // for(i=0;i<n;i++)
    // {
    //     c=a+b;
    //     a=b;
    //     b=c;
    // }
    
}
int main()
{
    int a=0,b=1,c,i;
     int k=fact(11);
    for(i=0;i<k;i++)
    {
        c=a+b;
        printf("\nfibbonaci of given number is:%d",c); 
        a=b;
        b=c;
    }
   
    
}