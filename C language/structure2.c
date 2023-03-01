#include<stdio.h>
struct student
{
    int rate,bill;
    int qty[50];
    int a,amt,diss,total;
    float gst,netbill;
};
int main()
{
    struct student a[5],b;
    int i;
    for(i=0;i<2;i++)
    {
        printf("enter rate:");
        scanf("%d",&a[i].rate);
        printf("enter qty:");
        scanf("%d",&a[i].qty);
        printf("enter amount:");
        scanf("%d",&a[i].amt);
        // printf("enter science:");
        // scanf("%d",&a[i].b);
        // printf("enter english:");
        // scanf("%d",&a[i].c);
    }
    printf("rate\tqty\tamt\tdiss\tbill\tgst\tnetbill");
    for(i=0;i<2;i++)
    {
        a[i].amt=a[i].rate+a[i].qty;
        a[i].diss=(float)(a[i].amt*5)/100;
        a[i].bill=a[i].amt-a[i].diss;
        a[i].gst=(a[i].bill*18)/100;
        a[i].netbill=a[i].bill+a[i].gst;
        printf("\n%d\t%d\t%d\t%d\t%d\t%.2f\t%.2f",a[i].rate,a[i].qty,a[i].amt,a[i].diss,a[i].bill,a[i].gst,a[i].netbill);
    }
}