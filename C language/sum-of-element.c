#include<stdio.h>
int main()
{ 
   int a[5][5],i,j,sum1=0,sum2=0,sum3=0,x,y;
   printf("enter row:");
   scanf("%d",&x);
   printf("enter colum:");
   scanf("%d",&y);
   for(i=0;i<x;i++)
   {
     for(j=0;j<y;j++)
	 {
		printf("enter a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
	 }
   }
   for(i=0;i<x;i++)
   {
	 for(j=0;j<y;j++)
	 {
		printf(" %d",a[i][j]);	
	 }	 
     printf("\n");
   }
	
    for(i=0;i<x;i++)
   {
	 for(j=0;j<y;j++)
	 {
		if(i<j)
		{
		   sum1=sum1+a[i][j];
		}   
		else if(i>j)
		{
			sum2=sum2+a[i][j];
		}			
		else
		{
			sum3=sum3+a[i][j];
		}
	 }
   } 
	printf("\n sum of diagonal element: %d",sum3);
	printf("\n sum of upper triangle: %d",sum1);
	printf("\n sum of lower triangle: %d",sum2);
}   