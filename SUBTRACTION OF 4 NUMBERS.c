#include <stdio.h>
int main()
{
float a,b,c,d,subtraction;
printf("enter first number :");
scanf("%f", &a);
printf("enter second number :");
scanf("%f", &b);
printf("enter third number :");
scanf("%f", &c);
printf("enter fourth number :");
scanf("%f", &d);
subtraction=a-b-c-d;
printf("the subtraction of %f,%f,%f,%f is %f\n",a,b,c,d,subtraction);
return 0;
}
