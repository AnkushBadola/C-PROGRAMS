#include <stdio.h>
int main()
{
float perimeter_of_square,area_of_square,side;
float perimeter_of_rectangle,area_of_rectangle,length,breadth;
float area_of_triangle,perimeter_of_triangle,base,height,a,b,c;
float circumference_of_circle,area_of_circle,radius;
printf("enter side of the square : ");
scanf("%f", &side);
printf("enter length of rectangle : ");
scanf("%f", &length);
printf("enter breadth of rectangle : ");
scanf("%f", &breadth);
printf("enter base of triangle : ");
scanf("%f", &base);
printf("enter height of triangle : ");
scanf("%f", &height);
printf("enter first side of triangle : ");
scanf("%f", &a);
printf("enter second side of triangle : ");
scanf("%f", &b);
printf("enter third side of triangle : ");
scanf("%f", &c);
printf("enter radius of circle : ");
scanf("%f", &radius);
perimeter_of_square = 4*side;
area_of_square=side*side;
perimeter_of_rectangle=2*(length+breadth);
area_of_rectangle=length*breadth;
perimeter_of_triangle=a+b+c;
area_of_triangle=0.5*base*height;
circumference_of_circle=2*3.14*radius;
area_of_circle=3.14*radius*radius;
printf("\n");
printf("THE PERIMETER OF SQUARE IS %f\n", perimeter_of_square);
printf("THE AREA OF SQUARE IS %f\n", area_of_square);
printf("THE PERIMETER OF RECTANGLE IS %f\n", perimeter_of_rectangle);
printf("THE AREA OF RECTANGLE IS %f\n", area_of_rectangle);
printf("THE PERIMETER OF TRIANGLE IS %f\n", perimeter_of_triangle);
printf("THE AREA OF TRIANGLE IS %f\n", area_of_triangle);
printf("THE CIRCUMFERENCE OF CIRCLE IS %f\n", circumference_of_circle);
printf("THE AREA OF CIRCLE IS %f\n", area_of_circle);
return 0;
}
