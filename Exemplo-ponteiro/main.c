/* 
 * File:   main.c
 * Author: MarcoGorak
 *
 * Created on 7 de Janeiro de 2016, 21:01
 */

#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    int x=9, *p, j=2;
    j=0; // J = 0
    p=&j; // P aponta pra J
    x= *p; // X = recebe para aonde P Aponta = J 
    j=10 * j; // J = 0
    (*p)++; // P recebe 1
    x--; // X perde 1 e fica -1
    (*p)+=x; // P recebe P mais P 
    if(x!=j)
        printf("X diferente de J");
    else
        printf("X igual a J");
    printf("\nj=%d\n",j);
    printf("\nx=%d\n",x);
    system("pause");
    return 0;
}


