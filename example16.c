//This program will do addition, multiplication, subtraction and division. We are going to do square root as well.
#include <stdio.h>
#include <math.h>

int main () 
{
    float a, b;
    printf("Please enter a value for a \n");
    scanf("%f", &a);
    printf("Please enter a value for b \n");
    scanf("%f", &b);

    printf("%.2f + %.2f = %.2f \n", a, b, a+b);
    printf("%.2f - %.2f = %.2f \n", a, b, a-b);
    printf("%.2f * %.2f = %.2f \n", a, b, a*b);
    printf("%.2f / %.2f = %.2f \n", a, b, a/b);

    printf("%.2f to the power of %.2f is %.2f \n", a, b, pow(a,b));
    printf("Square root of %.2f is %.2f \n", a, sqrt(a));
    printf("Square root of %.2f is %.2f \n", b, sqrt(b));
}