/* 
 * File:   main.c
 * Author: MarcoGorak
 *
 * Created on 3 de Janeiro de 2016, 19:33
 * 
 * Exemplo de controle de Estoque.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void compra (int *prod){

int prod1;
printf("Digite o valor da compra do estoque\n");
scanf("%d", &prod1);

if (*prod + prod1 > 1000)
printf ("Estoque muito grande");
else
*prod += prod1;
 printf("\n estoque atual \n  %d",*prod);
   printf("\n"); 
 system ("pause");
}

void venda(int *prod){

int prod1;
printf("Digite o valor da retirada do estoque\n");
scanf("%d", &prod1);

if (prod1 >=12)
*prod = *prod - prod1;

else
printf("Venda insuficiente");

if(*prod <0){
*prod = *prod + prod1;
printf("\n Venda acima do estoque \n");
}

 printf("\n O estoque atual \n %d",*prod); 
  printf("\n"); 
 
 system ("pause");
}


int main (void)
{
int valor1 , num ,cont;
valor1 = 100;
do{
	 cont == 2;
do{	 
       
printf("\n Estoque Atual = %d \n",valor1);
printf("\n (1) compra\n");
printf("\n (2) venda\n");
printf("\n (3) Sair \n");
printf("\n Digite a oepracao de estoque desejada \n");
scanf("%d",&num);
 
 system ("cls");

                 
 switch (num)

{
case 1: 
    compra (&valor1);
	break;
case 2:
    venda (&valor1);
	break;
    case 3: 
    return 0;
    break;
    
    default: printf("\n");

}

 }while(num > 3);
 

 printf("\n Digite (1) realizar outra operacao (2) para sair:\n\n");     
               scanf("%d",&cont);  
               system ("cls");

        } while(cont==1);
		 
         system("pause");
    return 0;

}


