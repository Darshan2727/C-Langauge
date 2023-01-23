#include<stdio.h>
void numbers()
{
    float feet,inches,centimeter;
    printf("enter feet:");
    scanf("%f",&feet);
    inches=feet*12;
    printf("inches: %.2f",inches);
    centimeter=inches*2.54;
    printf("\ncentimeter %.2f",centimeter);
}
int main()
{
    numbers();
}