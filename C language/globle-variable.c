#include<stdio.h>
int m,s,e,total;
float per;
void diss()
{
    printf("maths marks: %d \n",m);
    printf("science marks:%d \n",s);
    printf("english marks:%d \n",e);
    printf("total marks:%d \n",total);
    printf("percentage:%.2f \n",per);
}
void calc()
{
    total=m+s+e;
    per=(float)total/3;
    diss();
}
void setdata()
{
    printf("enter marks:");
    scanf("\n%d%d%d",&m,&s,&e);
    calc();
}
int main()
{
    setdata();
}