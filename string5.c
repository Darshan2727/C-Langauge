#include<stdio.h>
int main()
{
  char a[100],b[100];
  int i,j,c=0;
  printf("enter string:");
  gets(a);
  printf("\nyour string is: %s",a);
  while(a[c]!='\0')
  {
	c++;  
	j=c-1;
  }
  for(i=0;i<c;i++)
  {
	b[i]=a[j];
	j--;
  }
  b[i]= '\0';
  printf("\nreverse :%s",b);
  
  if(a[i]%!=0)
  {
  printf("\nfinal: %s",a);
  }
}  