#include <stdio.h>
 
int main ()
{
    printf("Hello World\n");

    // variable of 32 chars
    char name[32];

    // ask for a name
    printf("Enter a name\n");

    // read the input of the user
    scanf("%s", name);

    // print a message with the name entered
    printf("\nHello \t%s !\n\n\n", name);

    return 0;
}