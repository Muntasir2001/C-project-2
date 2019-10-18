//This program will do addition, multiplication, subtraction and division. We are going to do square root as well.
#include <stdio.h>
#include <math.h> //math library. The math.h header defines various mathematical functions and one macro. All the functions available in this library take double as an argument and return double as the result.

int main () 
{
    float a, b; //variable a and b declared...
    printf("Please enter a value for a \n"); //Inputting value a
    scanf("%f", &a);
    printf("Please enter a value for b \n"); //Inputing value b
    scanf("%f", &b);

    printf("%.2f + %.2f = %.2f \n", a, b, a+b); //Displaying Addition of a and b
    printf("%.2f - %.2f = %.2f \n", a, b, a-b); //Displaying Subtraction of a and b
    printf("%.2f * %.2f = %.2f \n", a, b, a*b); //Displaying Multiplication of a and b
    printf("%.2f / %.2f = %.2f \n", a, b, a/b); //Displaying Division of a and b

    printf("%.2f to the power of %.2f is %.2f \n", a, b, pow(a,b)); //displaying a to the power of b
    printf("Square root of %.2f is %.2f \n", a, sqrt(a)); //Displaying square root of a
    printf("Square root of %.2f is %.2f \n", b, sqrt(b)); //Displaying square root of b
}