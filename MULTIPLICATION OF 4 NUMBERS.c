#include <stdio.h>
int main()
{
float a,b,c,d,multiplication;
printf("enter first number :");
scanf("%f", &a);
printf("enter second number :");
scanf("%f", &b);
printf("enter third number :");
scanf("%f", &c);
printf("enter fourth number :");
scanf("%f", &d);
multiplication=a*b*c*d;
printf("the multiplication of %f,%f,%f,%f is %f\n",a,b,c,d,multiplication);
return 0;
}
