#include <stdio.h>
int main()
{
    int m;
    printf("Enter a number:");
    scanf("%d", &m);

    switch (m)
    {
    case 1:
        printf("JANUARY \nNo. of days=31 \n");
        break;
    case 2:
        printf("FEBRUARY \nNo. of days=28 \n");
        break;
    case 3:
        printf("MARCH \nNo. of days=31 \n");
        break;
    case 4:
        printf("APRIL \nNo. of days=30 \n");
        break;
    case 5:
        printf("MAY \nNo. of days=31 \n");
        break;
    case 6:
        printf("JUNE \nNo. of days=30 \n");
        break;
    case 7:
        printf("JULY \nNo. of days=31 \n");
        break;
    case 8:
        printf("AUGUST \nNo. of days=31 \n");
        break;
    case 9:
        printf("SEPTEMBER \nNo. of days=30 \n");
        break;
    case 10:
        printf("OCTOBER \nNo. of days=31 \n");
        break;
    case 11:
        printf("NOVEMBER \nNo. of days=30 \n");
        break;
    case 12:
        printf("DECEMBER \nNo. of days=31 \n");
        break;
    }
}