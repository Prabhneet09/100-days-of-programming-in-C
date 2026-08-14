#include <stdio.h>
#include <math.h>
int main() 
{
  int p,r,t;
  float SI,CI;
  printf("enter the principal amount: ");
  printf("enter the rate of interest: ");
  printf("enter the time: ");
  
  scanf("%d %d %d", &p &r &t);
  SI=(p*r*t)/100.0;
  CI=p*(pow(1+(r/100.0,t) -1);
  printf("simple interest = %2f\n", SI);
  printf("compount interest = %2f\n", CI);
  return 0;
}
