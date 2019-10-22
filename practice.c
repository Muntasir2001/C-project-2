#include <stdio.h>

int main() 
{
    char first_name[32], last_name[32];
    printf("Please enter your first name \n");
    // scanf("%c", &first_name); We cannot use space in scanf function, so we will use gets instead of scanf
    gets(first_name);
    printf("Please enter your last name \n");
    // scanf("%c", &last_name);
    gets(last_name);
    printf("Good morning %s %s, WELCOME TO THE PORTAL", first_name, last_name);
    return 0;    
}