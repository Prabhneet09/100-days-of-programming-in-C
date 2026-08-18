#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d;
    printf(" ax^2 +bx +c =0 \n");
    printf("enter a, b, c:");
    scanf("%f %f %f", &a,&b,&c);

    d=(b*b) -(4*a*c);

    if (d>0)
        {   float x1,x2;
            printf("roots are real and distinct.\n");
            x1=(-b+sqrt(d))/(2*a);
            x2=(-b-sqrt(d))/(2*a);
            printf("%f \n",x1 );
            printf("%f",x2);
        }
        
        else if (d==0)
        {   float x1,x2;
            printf("Roots are real and equal.\n");
            x1=-b/(2*a);
            printf("%f",x1);
        }
    

    else
    {     
        float realpart = -b/(2*a);
        float imagpart= sqrt(-d)/(2*a);
        printf ("Roots are complex (imaganery).\n");
        printf("x1 = %f + %fi\n", realpart, imagpart);
        printf("x2 = %f - %fi\n", realpart, imagpart);
        
    }
return 0;
}