#include <stdio.h>
int main()
{
  int sec, hours, mins, seconds;
printf("Enter time in seconds: ");
scanf("%d", &sec);

hours=sec/3600;
mins=(sec%3600)/60;
seconds= sec%60;

printf("%d %d %d", hours, mins, seconds);
return 0;
