#include<stdio.h>
int main()
{
	int a[5],b[5],c[5],i;
	float d;
	for(i=0;i<5;i++)
	{
		printf("enrter a[%d]:", i);
		scanf("%d",&a[i]);
		printf("enter b[%d];", i);
		scanf("%d",&b[i]);
		printf("enter c[%d];", i);
		scanf("%d",&c[i]);
	}
	printf("maths science english   total     perc.  grade");
	for(i=0;i<5;i++)
		{
			printf("\n %d",a[i]);
			printf("\t %d",b[i]);
			printf("\t %d",c[i]);
			printf("\t %d",(a[i]+b[i]+c[i]));
			//printf("\t %d",(a[i]+b[i]+c[i])/3);
			d=(float)(a[i]+b[i]+c[i])/3;
			printf("\t %.2f",d);
			
			if(a[i]<35 || b[i]<35 || c[i]<35)
			{
					printf("\tfail");
			}	 
			else if(d>=35 && d<50)
			{
					printf("\t E");
			}
			else if(d>=50 && d<60)
			{
					printf("\t D");
			}
			else if(d>=60 && d<70)
			{
					printf("\t C");
			}
			else if(d>=70 && d<80)
			{
					printf("\t B");
			}	
			else if(d>=80 && d<90)
			{
					printf("\t A");
			}
			else if(d>=90)
			{
					printf("\t A+");
			}	
	}
}	
			