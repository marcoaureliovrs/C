/* 
 * File:   main.c
 * Author: MarcoGorak
 *
 * Created on 3 de Janeiro de 2016, 19:16
 */

# include <stdio.h>
//# include <conio.h>
# include <stdlib.h>

/*
 *Constantes são usadas para armazenar valores que NãO podem ser modificadas 
 *durante a execução de um programa. Limite de 10 produtos
 */
# define LIM 10 

/*Variavel global - esta variável é declarada fora de qualquer função.Variáveis
 *globais podem ser utilizadas por qualquer função e qualquer função pode 
 *alterar o seu valor.
 */
int i; 


struct regcaixa{
int codprod;
char desprod[30];
float vendaprod;
}caixa[10];

//Função Cadastrar
void cadastrar(){
if( i < LIM)
{
system("cls");
printf("|--------------------------- Cadastro - PRODUTOS ---------------------------|\n");
caixa[i].codprod = i+1;
printf("\n Codigo do produto: %d ",caixa[i].codprod);
fflush(stdin);//Para limpar o buffer em Windows
printf("\n Digite a descricao do produto: ");
gets(caixa[i].desprod);
printf("\n Digite o valor de Venda do produto: ");
scanf("%f", &caixa[i].vendaprod);
i++;
}
else
printf("\nLIMITE EXCEDIDO\n");
}

//Função Listar
void listar(){
int x;
system("cls");
printf("|--------------------------- Listar - PRODUTOS ---------------------------|\n");
for(x=0; x<i; x++){
printf("\n Codigo do produto: %d", caixa[x].codprod);
printf("\n Descricao do produto: %s", caixa[x].desprod);
printf("\n Valor de venda: %.2f\n", caixa[x].vendaprod);
}
system("pause");
}

//Main
int main(){ 
    int cod; 
    do{ 
        system("cls"); 
        printf("|--------------------------- Controle - PRODUTOS ---------------------------|\n"); 
        printf("\n [1] Cadastrar\n"); 
        printf("\n [2] Listar\n"); 
        printf("\n [3] Sair\n\n--->"); 
        scanf("%i",&cod); 
        switch(cod){ 
            case 1: cadastrar(); break;
            case 2: listar(); break;
            case 3: return(0); break;
            default: printf("\n Codigo invalido \n");
            system("pause"); 
        } 
    } while(cod!=11);
    //getch(); 
}


