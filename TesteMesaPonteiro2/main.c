/* 
 * File:   main.c
 * Author: MarcoGorak
 *
 * Created on 3 de Janeiro de 2016, 19:07
 * 6) O que mostrará na tela? Faça o teste de mesa.
 * 
 */

#include <stdio.h> 
#include <stdlib.h> 
int main (void) 
{
    int y, *p, x; 
    y=0; // Y recebe 0
    p=&y; // Ponteiro P aponta para y valendo 0
    x= *p; // x recebe 0 que e o conteudo de y onde p aponta
    x=4; // x passa a valer 4
    (*p)++; // y passa a valer 1
    x--; // x passa a valer 3
    (*p) +=x; //  y passa a valer 4
    printf("y=%d e p=%p\n",y,p); // apresenta o conteudo de y 4 e o endereco de memoria dele
    (*p)+=15; // y passa a valer 19
    printf("y=%d\n",y); // apresenta 19
    p++; // o endereco de memoria que p aponta e trocado
    printf("p=%p\n",p); // apresenta o endereco trocado
    p-=1; // remove o numero adicionado volta a valer a mesma coisa que anteriormente
    printf("p=%p\n",p); // apresenta conteudo antigo
    system("pause"); 
    return 0; 
}


