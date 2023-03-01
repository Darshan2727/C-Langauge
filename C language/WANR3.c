#include<stdio.h>
int addition(int age)
{
    if(age>=18)
    {
        printf("eligble to vote");
    }
    else
    {
        printf("not eligble to vote");
    }
}
int main()
{
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    addition(age);
}
