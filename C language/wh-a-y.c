#include<stdio.h>
int main()
{
  char a='A',b,c='A';
  while(a<='E')
    { 
		b='A';
		while(b<='E')
		{
			printf(" %c ",c++);
			b++;
		}
		printf("\n");
		a++;
	} 
       
}   