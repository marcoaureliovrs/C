/* 
 * File:   main.c
 * Author: MarcoGorak
 *
 * Created on 7 de Janeiro de 2016, 21:07
 */

#include <stdio.h> 
#include <stdlib.h>
#define TAM 5

struct pessoal { 
char nome[25]; 
int idade; 
};

int main (void) 
{ 
    struct pessoal dados[TAM]; 
    int i, encontrou=0;
    for (i=0;i<TAM;i++) { 
        printf("\t Entre com seu nome: "); 
        gets(dados[i].nome);
        printf("\t Entre com sua idade: "); 
        scanf("%d",&dados[i].idade); 
        fflush(stdin); 
        system("cls");  
    }
    
    for (i=0;i<TAM;i++) { 
        if(dados[i].idade <10) {
            printf("\n Nome:"); 
            puts(dados[i].nome); 
        }
        else if (dados[i].idade > 10){

            encontrou = 1; 
        }
    }

    if(encontrou==1) 
        printf("\nTodos com 10 anos ou mais!!!!"); 
    system("pause"); 
 }

