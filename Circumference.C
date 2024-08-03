#include <stdio.h>
//Calculating the circumference and area of a circle given a value for the radius by the user
int main () {
#define PI 3.14159265358979323846 
double radius;
//double circumference;  [Can go here as well]
//double area;

printf("Enter the radius (in m) of the circle you would like to calculate the circumference and area of:");
scanf("%lf",&radius);

double circumference = 2*PI*radius;
double area = PI*radius*radius; // [Can also use the pow() function if math.h is included]

printf("\nThe circumference is %0.2lf", circumference);
printf(" and the area is %0.2lf.",area);
    return 0;
}
