#include<stdio.h>
void display (int n)
{
    if(n<5)
    {
        printf("\n inside function %d",n);
        display(++n);
    }
    printf("\n outside function %d",n);
}
int main()
{
    display(0);
}