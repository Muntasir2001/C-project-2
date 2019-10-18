//this is for adding two values

#include <stdio.h>

int main()
{
    int n1, n2; //defining n1 and n2 as a variable
    printf("Please input two integers \n");
    scanf("%d %d", &n1, &n2);
    printf("The area of a rectangle is %d", n1+n2 );
    return 0;
}