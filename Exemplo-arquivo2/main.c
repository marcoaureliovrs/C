/* 
 * File:   main.c
 * Author: MarcoGorak
 *
 * Created on 7 de Janeiro de 2016, 21:19
 */

//#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    FILE *fp;
    int num;
    fp = fopen ("num.txt", "a");
    printf ("\n Escreva um numero:");
    scanf("%d",&num);
    fprintf (fp,"%d \n",num);
    fclose (fp);
    system("pause");
    return 0;
}


