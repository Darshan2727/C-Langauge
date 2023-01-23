#include<stdio.h>
void subject()   //NANR
{
    int science,maths,english,total;
    printf("enter science's marks:");
    scanf("%d",&science);
    printf("enter maths's marks:");
    scanf("%d",&maths);
    printf("enter english's marks:");
    scanf("%d",&english);
    total=(science+maths+english);
    printf("total marks: %d", total);
}
void numbers()
{
    float feet,inches,centimeter;
    printf("\n\nenter feet:");
    scanf("%f",&feet);
    inches=feet*12;
    printf("inches: %.2f",inches);
    centimeter=inches*2.54;
    printf("\ncentimeter %.2f",centimeter);
}
void circle()
{
    float radius,area,pi=3.14;
    printf("enter radius:");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("area of circle: %.2f",area);
}
int main()
{
   // subject();
  //  numbers();
    circle();
}