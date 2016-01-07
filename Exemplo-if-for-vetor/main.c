/* 
 * File:   main.c
 * Author: MarcoGorak
 *
 * Created on 3 de Janeiro de 2016, 18:49
 * 
 * Este exemplo consiste no uso de Vetor para armazenar 5 idades e utilizar
 * a estrutura for para caminhar entre as posições e solicitando as idades
 * para o usuário digitar, é feito a comparação da maior e menor idade e
 * adicionado as suas respectivas variáveis e é apresentado as idades
 * maior de 18 anos.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
 // Declaração de variáveis
 int idade[5], i, maior=0, menor;
 
 
 for (i=0; i<5; i++)
 {
     printf ("\n Digite a idade (%d): ", i+1);
     scanf ("%d",&idade[i]);
     
     if (idade[i]>maior)
        maior=idade[i];
  
     
     if (idade[i]<menor)
         menor=idade[i];

     
     }
     
     for (i=0; i<5; i++) { 
        if (idade[i]>=18)
           printf ("\n As idades >=18 sao: %d \n", idade[i]);     
        }
     
      printf ("\n A maior idade informada: %d \n", maior);    
      printf ("\n A menor idade informada: %d \n", menor); 
      
system ("pause");
return 0;
}

