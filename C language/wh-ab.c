#include<stdio.h>
int main()
{
  char a='A',b;
  while(a<='E')
    { 
		b='A';
		while(b<='E')
		{
			printf("%c ",a);
			b++;
		}
		printf("\n");
     a++;
	} 
       
}   