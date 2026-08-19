#include <stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the sides of triangle:\n");
    scanf("%f %f %f",&a, &b, &c);

    if (a==b && c==b)
    {
        printf("It is an equilateral triangle.");
    }

    else if (a==b || b==c ||c==a)  
    {
        printf("It is an isoceles triangle.");
    }

    else
    {
        printf("It is a scalene triangle.");
    }
return 0;

}