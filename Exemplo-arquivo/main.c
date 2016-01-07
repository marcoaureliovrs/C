/* 
 * File:   main.c
 * Author: MarcoGorak
 *
 * Created on 7 de Janeiro de 2016, 21:17
 */

//#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    char palavra[20];
    fp = fopen ("texto.txt", "a");
    
    if (fp == NULL) {
        printf ("Houve um erro ao abrir o arquivo.\n");
        return 1;
    }
    
    printf ("\n Escreva uma palavra:");
    scanf("%s",&palavra);
    fprintf (fp,"%s \n", palavra);
    fclose (fp);
    system("pause");
    return 0;
}


