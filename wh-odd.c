#include<stdio.h>
int main()
{
  int a=2,b;
  while(a<=10)
    { 
		b=2;
		while(b<=10)
		{
			printf("%d ",a);
			b+=2;
		}
		printf("\n");
     a+=2;
	} 
       
}   