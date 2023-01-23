#include<stdio.h>
void diss(int m,int s,int e,int total,float per)
{
    
    printf("maths marks: %d \n",m);
    printf("science marks:%d \n",s);
    printf("english marks:%d \n",e);
    printf("total marks:%d \n",total);
    printf("percentage:%.2f \n",per);
}
void calc(int m,int s,int e)
{
    int total;
    float per;
    total=m+s+e;
    per=total/3;
    diss(m,s,e,total,per);
}
void setdata()
{
    int m,s,e;
    printf("enter marks:");
    scanf("\n%d%d%d",&m,&s,&e);
    calc(m,s,e);
}
int main()
{
    setdata();
}