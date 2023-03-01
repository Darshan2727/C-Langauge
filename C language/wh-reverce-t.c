#include<stdio.h>
int main()
{
	int a=1,b,sp=25;
	while(a<=5)
	{
		b=1;
		while(b<=sp)
		{
			printf(" ");
			b++;
		}
		b=a;
		while(b<=5)
        {
			printf("*");
			b++;
		}
		//sp--;
		printf("\n");
		a++;
	}
}	