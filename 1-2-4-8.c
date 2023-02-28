#include <stdio.h>
int main()
{
   int i = 1, j = 1, n;
   printf("enter number:");
   scanf("%d", &n);
   while (i <= n)
   {
      j *= 2;
      printf(" %d", j);
      i++;
   }
}
/*
  do
  {
     printf(" %d",i*i);
     i++;
   }while(i<=n);

}	*/