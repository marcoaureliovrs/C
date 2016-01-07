/* 
 * File:   main.c
 * Author: MarcoGorak
 *
 * Created on 7 de Janeiro de 2016, 20:59
 * 
 * Exemplo abaixo mostra como trabalhar com constantes e funções
 */

#include <stdio.h>
#include <stdlib.h>
# define TAM 4

void ler (int *num){
    int i;
    for (i=0; i<TAM; i++){
        printf("Digite um numero inteiro");
        scanf("%d", &num[i]);
    }
}

void exebir(int *num){
     int i;
     printf("Segue os Numeros Cadastrados");
     for (i=0; i<TAM; i++) {
         printf("\n %d \n", num[i]);
     }
}
int main () {
    int num[TAM];
    ler(num);
    exebir(num);
system("pause");

}



