/* 
 * File:   main.c
 * Author: MarcoGorak
 *
 * Created on 3 de Janeiro de 2016, 18:34
 * 
 * Exemplo de calculadora que realiza as 4 operações básicas (*,+,-,/) e mais
 *  3 (Exponenciação, Porcentagem e Raiz Quadrada).
 * 
 * Primeiro o usuário digita a operação que deseja realizar depois os 2
 * números que serão calculados.
 * 
 */

#include<stdio.h>
#include<stdlib.h>
//#include <conio.h>
#include<math.h>

int main ()
{   
    //Declaração de variáveis
    float num1,num2,resu,r;
    char op;
    
  
    //Solicitando os dados ao usuário
    printf("\n    CALCULADORA \n\n    1-Menu Principal\n    2-(+) Soma\n    3-(-) Subtracao \n    4-(*) Multiplicacao\n    5-(/) Divisao \n    6-(E) Exponenciacao \n    7-(R) Raiz Quadrada \n    8-(P) Porcentagem \n\n    Escolha um operador:");
    scanf ("%c",&op);
    
               if(op=='7')
           {          
               printf("\n    Digite um valor inteiro da qual sera extaida a raiz quadrada:");
               scanf("%g",&r);
           }
    
            
        
         else if(op!='1') 
         {     printf("\n   Digite o primeiro valor:");
               scanf("%f",&num1);
                    
               printf("\n   Digite o segundo valor:");
               scanf("%f",&num2);}

    

  //Realizando o calculo e apresentando na tela conforme opção selecionada
 switch (op)
{
      
       
       case '2': 
            resu = num1+num2;
            printf("\n O resultado e: %.2f \n",resu);break;  
       
       case '3': 
            resu = num1-num2;
            printf("\n O resultado e: %.2f \n",resu);break; 
       
       case '4': 
            resu = num1*num2;
            printf("\n O resultado e: %.2f \n",resu);break;
      case '5':       
            resu = num1/num2;
            printf("\n O resultado e: %.2f \n",resu);break;     
      case '6':
                resu = pow(num1,num2);
                printf("\n O resultado e: %.2f \n",resu);break;
                //printf("\n O resultado e: %.2f \n",resu);getch();break;
      case '7':
             
                printf("\n A raiz quadrada e: %.2f.\n",  sqrt(r) );break; 
                
      case '8':
               
                resu = (num1*num2)/100;
                printf("\n O resultado e: %.2f \n",resu);
                //printf("\n O resultado e: %.2f \n",resu);getch();
                
                default:printf("\n Operador invalido");

         }
         

           system("pause")  ;        
           return 0;
}
      


