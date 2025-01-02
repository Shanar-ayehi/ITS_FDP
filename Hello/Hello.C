#include <stdio.h>
 
int main ()
{
    // variable of 32 chars
    char nome[32];

    // ask for a name
    printf("Inserisci il tuo nome:\n");
    // scan user input
    scanf("%s", nome);
    
    char cognome[32];

    //ask for a surname
    printf("Inserisci il tuo cognome:\n");

    // read the input of the user
    scanf("%s", cognome);

    // print a message with the user input and the thanks
    printf("\nBenvenuto, %s %s !\nTi ringraziamo per aver usato il nostro programma.\nTi auguriamo buone feste \n\t    *\n\t   ***\n\t  *****\n\t *******\n\t   ***\n", nome, cognome);

    return 0;
}