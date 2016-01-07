/* 
 * File:   main.c
 * Author: MarcoGorak
 *
 * Created on 3 de Janeiro de 2016, 19:03
 * 
 * 5) Analise o código a seguir e faça um comentário em todas as linhas explicando o que está fazendo.
 * 
 */


#include <stdio.h> 
#include <stdlib.h> 
int main (void) 
{
    int a=2, b=1, c=5,*p1, *p2, *p3; 
    p1=&a; //Ponteiro 1 recebe a
    p2=&b;  // Ponteiro 2 recebe b
    p3=&c;  // ponteiro 3 recebe c
    *p1=8;  // variavel a que possui 2 recebe 8 atraves dessa atribuicao ficando 8
    *p2=b+10; // variavel b recebe 1 que e o conteudo dela mesma mais 10 totalizando 11
    *p3=*p1 * *p2; // 88
    printf ("Conteudo da variavel a=%d\n",a); // Apresenta o conteudo de a que e 8
    printf ("Endereco para onde o ponteiro p1 aponta a=%p\n",p1); // Apresentara o endereco de memoria  de A
    printf ("Conteudo da variavel b=%d\n",b); // Apresentara 11
    printf ("Endereco para onde o ponteiro p2 aponta b=%p\n",p2); // Apresentara o endereco de memoria de B
    printf ("Conteudo da variavel c=%d\n",c); // Apresentara 88
    printf ("Endereco para onde o ponteiro p3 aponta c=%p\n",p3); // Apresentara o endereco de memoria de c
    (*p1)++; // a que era 8 passa a ser 9
    a++; // A que era 9 passa a ser 10
    *(p2++); // Perde apontamento
    *(p3--); // perde apontamento
    printf ("\n\nConteudo da variavel a=%d\n",a); //Apresenta 9
    printf ("Endereco para onde o ponteiro p1 aponta a=%p\n",p1); // Apresentara o endereco de memoria  de A 
    printf ("\n\nConteudo da variavel b=%d\n",b); // Apresenta 11
    printf ("Endereco para onde o ponteiro p2 aponta =%p\n",p2); // Apresenta o endereco de memoria alterado
    printf ("Endereco de b =%p\n",&b); // Apresenta o endereco de memoria de b
    printf ("\n\nConteudo da variavel c=%d\n",c); //  Apresenta 88
    printf ("Endereco para onde o ponteiro p3 aponta =%p\n",p3); // Apresenta o endereco de memoria alterado
    printf ("Endereco de c =%p\n",&c); // Apresenta o endereco de memoria de c
    system("pause");
} 

