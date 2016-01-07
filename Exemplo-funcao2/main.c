/* 
 * File:   main.c
 * Author: MarcoGorak
 *
 * Created on 7 de Janeiro de 2016, 21:21
 */

#include <stdio.h> 
#include <stdlib.h> 
//#include <conio.h>

//void quadrado(int *n1, int *n2)
//{
//n1 = n1 * 2; 
//n2 = n2 * 2;
//}
//int main(void)
//{
//int valor1, valor2;
//printf("\n Digite o primeiro numero: ");
//scanf("%d",&valor1);
//printf("\n Digite o segundo numero: ");
//scanf("%d",&valor2);
//quadrado(valor1,valor2);
//printf("\n Quadrado do primeiro numero: %d ",valor1); 
//printf("\n Quadrado do segundo numero: %d ", valor2);
//system("pause");
//}


void quadrado(int *n1, int *n2) {
    n1 = n1 * 2; 
    n2 = n2 * 2;
}

int main(void)
{
    int valor1, valor2;
    printf("\n Digite o primeiro numero: ");
    scanf("%d",&valor1);
    printf("\n Digite o segundo numero: ");
    scanf("%d",&valor2);
    quadrado(valor1,valor2);
    printf("\n Quadrado do primeiro numero: %d ",valor1); 
    printf("\n Quadrado do segundo numero: %d ", valor2);
    system("pause");
}

