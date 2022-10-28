#include <stdio.h>

int main()
{
    char name[10];
    printf("Enter name: ");
    gets(name); // function to read string from user
    printf("Name: ");
    puts(name); // function to display string.

    return 0;
}