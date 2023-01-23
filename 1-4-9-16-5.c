#include<stdio.h>
int main()
{
   int i=1,n;
   printf("enter number:");
   scanf("%d",&n);
 /*  while(i<=n)
   {
     if(i%2==0)
	 {
	  printf(" %d",i*i);
	 } 
     else if(i%2!=0)
	 {
      printf(" %d",i);
	 }
     i++;	 
	}
	*/
    
   
 
	do
	{	
      if(i%2==0)
	 {
	  printf(" %d",i*i);
	 } 
     else if(i%2!=0)
	 {
      printf(" %d",i);
	 }
     i++;	 
    }while(i<=n);
	
}	