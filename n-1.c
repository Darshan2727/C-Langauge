#include<stdio.h>
int main()
{
    int a,n;
	printf("enter number:");
	scanf("%d",&n);
	a = n;
    /*while(a>=n)
	{
	  printf(" %d",a);
	  a--;
	}*/
	do
	{
		printf(" %d",a);
		a--;
	}while(a>=1);	
}	