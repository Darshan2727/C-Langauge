#include<stdio.h>
int main()
{
  char a=1;
  while(a<='Z')
  {
    if(a%2!=0)
	{
	 printf("%c",a);
	}
    a++;
  }
}  