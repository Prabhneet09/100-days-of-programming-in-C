#include <stdio.h>
int main()
{
    int a,b;
    char o;
    printf("Enter first no: ");
    scanf("%d", &a);

    printf("Enter second no: ");
    scanf("%d", &b);

    
    printf("enter the operation you want to perform (+,-,*,/,%%) :");
    scanf(" %c", &o);
    
    switch (o)
    {
    case '+':
    printf("Result: %d", a+b);
    break;

    case '-':
    printf("Result: %d", a-b);
    break;
    
    case '/':
    printf("Result: %d", a/b);
    break;
    
    case '*':
    printf("Result: %d", a*b);
    break;
    
    case '%':
    printf("Result: %d", a%b);
    break;

    default:
    printf("invalid operator.");
}
return 0;
}