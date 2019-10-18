//This is for inputing 3 names of the students and their heights and then displaying their heights at the end in separate lines. 

#include <stdio.h>

int main() 
{
    char name1[20], name2[20], name3[20]; //defining 3 variables and limiting the number of characters to 32...
    float h1, h2, h3; //defining h1, h2 and h3 with float data type..
    printf("Please enter the names! \n");
    scanf("%s %s %s", &name1, &name2, &name3);
    printf("Please enter the heights \n");
    scanf("%f %f %f", &h1, &h2, &h3);
    printf("%s : %.2f \n %s : %.2f \n %s : %.2f \n", name1, h1, name2, h2, name3, h3);
    return 0;
}


