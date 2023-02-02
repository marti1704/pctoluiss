/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void fattoriale (int numero)
{
     int tot=1;
     while(numero>0)
 {    tot=tot*numero;
     numero=numero-1;
 }
     printf("il fattoriale e':%d\n",tot);
}
    
    
int main()

{
    int N;
    printf("prendi un numero\n");  
    scanf("%d",&N);
    
    fattoriale(N);
    
   
 return 0;
}