#include<stdio.h>
int main()
{
	int science,maths,english,hindi,gujrati,total,grade,A,B,C,D,E,F,Fail;
	float per;
	printf("science marks:");
	scanf("%d",&science);
	printf("maths marks:");
	scanf("%d",&maths);
	printf("english marks:");
	scanf("%d",&english);
	printf("hindi marks:");
	scanf("%d",&hindi);
	printf("gujrati marks:");
	scanf("%d",&gujrati);
	total=science+maths+english+hindi+gujrati;
	per=total/5;
	if(per>90)
	{
		grade=A;
	}	
	else if(per>80)
	{
		grade=B;
	}
	else if(per>70)
	{
		grade=C;
    }
	else if(per>60)
	{
		grade=D;
	}
	else if(per>50)
	{
		grade=E;
	}	
	else if(per>33)
	{
		grade=F;
	}
	else if(per<33)
	{
		grade=Fail;
	}
	printf("science\tmaths\tenglish\thindi\tgujrati\ttotal\tper\tgrade");
	printf("%d\t%d\t%d\t%d\t%d\t%d\t%.2f\t%c",science,maths,english,hindi,gujrati,total,per,grade);
}	