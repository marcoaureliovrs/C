/* 
 * File:   main.c
 * Author: MarcoGorak
 *
 * Created on 7 de Janeiro de 2016, 21:11
 */

#include <stdio.h> 
#include <stdlib.h>
//#include <conio.h>
#define TAM 1

struct pessoal { 
    char nome[25]; 
    char sexo[1];
    int idade; 
};

int main (void) 
{ 
    struct pessoal dados[TAM]; 
    int i;
    for (i=0;i<TAM;i++) { 

        printf("\t Entre com o nome: "); 
        gets(dados[i].nome);

        printf("\t Entre com o sexo: ");  
        gets(dados[i].sexo);
        fflush(stdin);
        printf("\t Entre com a idade: "); 
        scanf("%d",&dados[i].idade);


        fflush(stdin); 
        system("cls"); 
    }
    
    for (i=0;i<TAM;i++) { 
        if(dados[i].idade >= 18){
            printf("Nome:" ,"%d",dados[i].idade); 
            puts(dados[i].nome);
            printf("\n %d \n ",dados[i].idade);
            printf("Sexo");
            puts(dados[i].sexo);
        }
    }
    system("pause"); 
}



