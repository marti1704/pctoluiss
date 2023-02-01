/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    int somma;
    int cont;
    int media;
    printf("inserire un numero positivo\n");
    numero=0;
    somma=0;
    cont=0;
    media=0;
    
    while(numero>=0)
    {
        scanf("%d",&numero);
        somma=somma+numero;
        cont=cont+1;
        media=somma/cont;
        printf("fare la media di tutti i numeri: %d\n",media);
    }
    return 0;
}
