#include<stdio.h>
int main()
{
  int a=1,b;
  while(a<=10)
    { 
		b=1;
		while(b<=10)
		{
			printf("%d ",a);
			b+=2;
		}
		printf("\n");
     a+=2;
	} 
       
}   