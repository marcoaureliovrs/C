/* 
 * File:   main.c
 * Author: MarcoGorak
 *
 * Created on 7 de Janeiro de 2016, 20:33
 */

#include<stdio.h>
#include<stdlib.h>
#include <malloc/malloc.h> //#include<malloc.h>

/**
Script simples de pilha onde possui os seguintes métodos:
       insere()
       imprime()
       ecluir()
       menu()
       main()

Script com foco em cadastro de códigos afim de armazena-los em pilha e serem
processados. A ordem de processamento é: O Primeiro a Sair é o ultimo a ser
processado, o último inclido é o primeiro a ser processado.

*/

int fila[10];
int i;

//Método insere()
void insere(){
     //Inserção simples no respectivo indice.
	printf("\nDigite a senha: ");
	scanf("%d",&fila[i]);
	i++;
}

/**
 Método imprime() ** Responsável por imprimir todos os registros 
 começando pelos recentes
*/
void imprime () {
     int j;
     for (j=0; j<i; j++){ 
         printf("\n Fila numero :  %d ",fila[j]);
     }
}

//Método Excluir() ** Responsável por excluir o registro mais recente **
void excluir() {
   int j;
   
     for(j=10; j<i; j--){
         fila[j] = fila[j+1];
     }         
     i--;
     system("pause");  
}

// Método menu() ** Responsável pelo print de informações iniciais na tela **	
void menu()
{
	system("cls");
	printf("Fila");
 printf("\n\n1-Inserir\t2 - Excluir\t3 - Imprimir\t4 - Sair\n\n");
	printf("OPCAO: ");	
}

//Método Main()
int main()
{
    char opcao='0';
    while(opcao!='4')
    {
     menu();
     opcao=getchar();
     fflush(stdin);
     
     // Valida a opção digitada após a chamada do método menu()
     switch(opcao)
     {
      case'1':insere();
      break;
      case'2':excluir();
      break;
      case'3':imprime();
        getchar();
      break;
      case'4':printf("\nFim de Execucao");

      getchar();
      exit(1);
      default:
      break;
     }
    }
}

