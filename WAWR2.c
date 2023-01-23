#include<stdio.h>
float addition(float unit charge,float unit)
{
     return charge,unit;
}
float main()
{
    float unit,charge;
    printf("unit used:");
    scanf("%f",&unit);
    
     if(unit<100)
    {
        charge=(unit*0.6)+50;
    }
    else if(unit>100 && unit<200)
    {
        charge=(unit*0.8)+50;
    }
    else if(unit>=200 && unit<300)
    {
        charge=(unit*0.9)+50;
    }
    else if(unit>=300)
    {
        charge=(unit*15)/100+50;
    }
    printf("total amount is: %f",charge);
    printf("%f",addition(charge,unit));
}