#include <stdio.h>
int main()
{
float a,b,c,d,division;
printf("enter first number :");
scanf("%f", &a);
printf("enter second number :");
scanf("%f", &b);
printf("enter third number :");
scanf("%f", &c);
printf("enter fourth number :");
scanf("%f", &d);
division=a/b/c/d;
printf("the division of %f,%f,%f,%f is %f\n",a,b,c,d,division);
return 0;
}
