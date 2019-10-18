// This program will calculate rectangles area and then convert the result to another unit.
#include <stdio.h>
#define M_CM 100

int main() 
{
    float s1, s2; //defining s1 and s2 as two sides of a rectangle
    printf("To calculate the area of the rectangle, please input the dimensions of both sides \n");
    scanf("%f %f", &s1, &s2);
    printf("The area of a rectangle in metres is %.2f \n", s1*s2); //calculating area in metres
    printf("The area of a rectangle in cm is %.2f \n", s1 * s2 * M_CM); //converting m to cm
    return 0;
}
