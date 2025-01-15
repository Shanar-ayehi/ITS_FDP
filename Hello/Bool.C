#include <stdio.h>
#include <stdbool.h>
#define PI_GRECO 3.14159265358
#define NEW_LINE printf("\n")
#define DEBUG_PRINT(x) printf("[DEBUG] - ");printf("%s", x);printf("\n");
int main ()
{
    bool b = true;
    printf("my bool value %d", b);
    NEW_LINE;
    int i = 10;
    printf("my integer value %d", i);
    NEW_LINE;
    float f = 10.0;
    printf("Enter a real number: ");
    scanf("%f", &f);
    NEW_LINE;
    printf("my float value %f", f);
    NEW_LINE;
    printf("===AREA DEL CERCHIO===");
    NEW_LINE;
    printf("inserisci il raggio: ");
    scanf("%f", &f);
    NEW_LINE;
    float area=f*f*PI_GRECO;
    float funny = (f+f-PI_GRECO)/10.0;
    printf("l'area del cerchio è %f", area);
    NEW_LINE;
    printf("L'area del cerchio con tutti gli operatori matematici è %f", funny);
    NEW_LINE;
    DEBUG_PRINT("Il programma è terminato")

    NEW_LINE;
    NEW_LINE;
    return 0;
}