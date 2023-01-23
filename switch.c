#include<stdio.h>
int main()
{
    int a,b,c,ch;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);

    printf("\n1. addition");
    printf("\n2. substraction");
    printf("\n3. multiplication");
    printf("\n4. division");
    printf("\n enter choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("\n additon of a and b:%d",a+b);
            break;
        case 2:
            printf("\n substraction of and b:%d",a-b);
            break;
        case 3:
            printf("\n muliplication of and b:%d",a*b);
            break;
        case 5:
            printf("\n division of and b:%d",a/b);
            break;
        default:
            printf("\n wrong choice");
            break;

    }
}
