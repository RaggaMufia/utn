#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int getInt(char *mensaje)
{
    int numero;
    char auxiliar[10];
    printf(mensaje);
    fflush(stdin);
    gets(auxiliar);
    numero = atoi(auxiliar);

    return numero;
}

float getFloat(char *mensaje)
{
    float numero;
    char auxiliar[10];
    printf(mensaje);
    fflush(stdin);
    gets(auxiliar);
    numero = atoi(auxiliar);

    return numero;
}

char getChar(char mensaje[], char retorno)
{
    printf(mensaje);
    fflush(stdin);
    scanf("%c", &retorno);
    return retorno;
}

char* getString(char mensaje[], char retorno[])
{
    printf(mensaje);
    fflush(stdin);
    scanf("%s", retorno);
    return retorno;
}
