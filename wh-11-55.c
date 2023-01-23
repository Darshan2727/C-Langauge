#include<stdio.h>
int main()
{
  int a=1,b,c=11;
  while(a<=5)
    { 
		b=1;
		while(b<=5)
		{
			printf(" %d ",c++);
		
			b++;
		}
		c+=5;
		printf("\n");
		a++;
	} 
       
}   