#include<stdio.h>
int main()
{
   int i=1,a=0;
   while(i<=10)
   {
	   
	if(i%2==0)
	{
	  a+=i;
	  printf("%d",i);
	}  
	  i++;

   }
    printf("sum: %d",a);
}	
	/*do
	{
		if(i%2==0)
		{
          a+=i;
          printf("%d",i);
		}
        i++;
    }while(i<=10);
    printf("sum: %d",a);	
}	*/