#include<stdio.h>
int main()
{
    int a=10,b=20,*i,*j;
    i=&a;
    j=&b;
    printf("Before sweping");
    printf("\nvalue of a:%d",*i);
    printf("\nvalue of b:%d",*j);
    *i=*i+*j;
    *j=*i-*j;
    *i=*i-*j;
    printf("\n\nafter sweping");
    printf("\nvalue of a:%d",*i);
    printf("\nvalue of b:%d",*j);
}