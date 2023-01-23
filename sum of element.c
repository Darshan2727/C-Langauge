#include<stdio.h>
int main()
{ 
   int a[5][5],i,j,sum1=0,sum2=0,sum3=0;
   for(i=0;i<5;i++)
   {
     for(j=0;j<5;j++)
	 {
		printf("enter a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
	 }
   }
   for(i=0;i<5;i++)
   {
	 for(j=0;j<5;j++)
	 {
		printf(" %d",a[i][j]);	
	 }	 
     printf("\n");
   }
	for(i=0;i<5;i++)
	{
		sum1=sum1+a[i][i];
	}	
    for(i=0;i<5;i++)
   {
	 for(j=0;j<5;j++)
	 {
		if(i<j)
		{
		   sum2=sum2+a[i][j];
		}   
		else if(i>j)
		{
			sum3=sum3+a[i][j];
		}			
	 }
   } 
	printf("\n sum of diagonal element: %d",sum1);
	printf("\n sum of upper triangle: %d",sum2);
	printf("\n sum of lower triangle: %d",sum3);
}   