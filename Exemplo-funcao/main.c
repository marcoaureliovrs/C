/* 
 * File:   main.c
 * Author: MarcoGorak
 *
 * Created on 3 de Janeiro de 2016, 19:26
 * Exemplo de calculadora que realiza as 4 operações básicas (*,+,-,/) cada
 * operação é executada por uma função diferente.
 * 
 */

#include <stdio.h>
#include<stdlib.h>
//#include<conio.h>

void mult(float valor1,float valor2)
{
     float result;
     result = valor1 * valor2;
     printf("\n Resultado :%2.f",result);
     }
void soma (float valor1,float valor2)
{
      float result;
     result =  valor1 + valor2;
     printf("\n Resultado :%2.f",result);
     }
void sub (float valor1,float valor2)
{
      float result;
     result =  valor1 - valor2;
     printf("\n Resultado :%2.f",result);
     }
void div (float valor1,float valor2)
{
     float result;
     if(valor2==0)
     printf("\n erro\n");
     else
     {
         result = valor1/valor2;
          printf("\n Resultado :%2.f",result);
          }
          }
          
          int main (void)
{
    float num1,num2;
    char op;
    
    printf("\n Digite qual operacao deseja realizar(+,-,*,/):");
    scanf("%c",&op);
    
    printf("\n Escreva um numero inteiro:");
    scanf("%f",&num1);
    printf("\n Escreva outro numero inteiro:");
    scanf("%f",&num2);
    
    
       switch (op)
{
      
       
       case '+': 
            
          soma(num1,num2);
          break;
       
       case '-':
           
           sub(num1,num2);
           break;
       
       case '*': 
            mult(num1,num2);
            break;
       case '/': 
            div(num1,num2);
            break;
           
        
       default:printf("\n Opcao invalida\n");
    
    }
    
    system("pause");
    return 0;
}
          
    
     
     

