#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50},i;
    int b[]={15,25,35,45,55},j;
    printf("A:");
    for(i=0;i<5;i++)
    {      
        printf(" %d",a[i]);
    }
    printf("\nB:");
    for(i=0;i<5;i++)
    {
        printf(" %d",b[i]);
    }

    int aa=5,bb=5;
    int total= aa + bb;
    int c[total];
    for (i = 0; i < aa; i++) {
        c[i] = a[i];
    }
    for (i = 0, j = aa; j < total && i < bb; i++, j++)  
    {
        c[j] = b[i];
    }
 
    printf("\nAfter Merge:");
    for (i = 0; i < total; i++) 
    {
        printf("%d ", c[i]);
    }
    
}
