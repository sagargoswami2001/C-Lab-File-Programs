/*Define a macro with one parameter to compute the volume of a spheres. WAP using this macro to compute
the volume for spheres of radius 5 meters. (4/3(3.14*r3))*/
#include<stdio.h>
#include<conio.h>
#define SPHERE(r) (1.33*3.14*r*r*r)
void main()
{
    float radius;
    printf("\nEnter the Radius: ");
    scanf("%f",&radius);
    printf("Volume of Sphere is: %f",SPHERE(radius));
}