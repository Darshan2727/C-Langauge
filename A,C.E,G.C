#include<stdio.h>
int main()
{
  char a='A';
  do
  {
    if(a%2!=0)
	{
	 printf("%c",a);
	}
    a++;
  }while(a<='Z');
}  