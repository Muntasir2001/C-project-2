//this is for calculating an average.

#include <stdio.h>

int main() 
{
    float n1, n2, avg; //defining n1, n2 and avg as a variable 
    printf("Please input two numbers you want to find average from \n");
    scanf("%f %f", &n1, &n2);  //Inputing two value to calculate the average...
    avg = (n1+n2)/2; //adding value to the avg variable
    printf("The average of %.2f and %.2f is %.2f \n", n1, n2, avg);
    return 0;
}