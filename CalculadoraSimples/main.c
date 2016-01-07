/* 
 * File:   main.c
 * Author: MarcoGorak
 *
 * Created on 3 de Janeiro de 2016, 18:19
 * 
 * Exemplo de calculadora que realiza as 4 operações básicas (*,+,-,/)
 * Primeiro o usuário digita a operação que deseja realizar depois os 2
 * números que serão calculados.
 * 
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{

//Declarando variáveis
int num1, num2, resu;
char oper;

//Solicitando os dados do usuário
printf("\n Digite qual operação deseja realizar (*,+,-,/): ");
scanf("%c",&oper);

printf("\n Digite o primeiro valor:");
scanf("%d",&num1);

printf("\n Digite o segundo valor:");
scanf("%d",&num2);

switch (oper)
{
       case '/': 
         resu = num1/num2;
         printf("\n O resultado é: %d \n",resu);break;
       case '+': 
         resu = num1+num2;
         printf("\n O resultado é: %d \n",resu);break;  
       case '-': 
         resu = num1-num2;
         printf("\n O resultado é: %d \n",resu);break; 
       case '*': 
         resu = num1*num2;
         printf("\n O resultado é: %d \n",resu);break; 
       default :printf("\n O operador solicitado esta incorreto");
         
}
system("pause");
return 0;
}

