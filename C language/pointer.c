#include<stdio.h>
int main()
{
    int a=20,*i,**j;
    i=&a;
    j=&i;
    printf("value of a:%d",a);
    printf("\naddress of a:%u",&a);
    printf("\naddress of a using i:%d",i);
    printf("\naddres of i:%u",&i);
    printf("\nvalue of a using i:%d",*i);
    printf("\naddress of i using j:%d",j);
    printf("\nvalue of a using j:%d",**j);
}