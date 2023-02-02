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
    int potenza;
    int risultato;
    
    printf("prendere un numero da elevare alla potenza\n");
    scanf("%d",&numero);
    printf("di quanto vuoi elevare numero\n");
    scanf("%d",&potenza);
    risultato=1;
    
    while(potenza>0)
    {
        
        risultato= risultato*numero;
        
        potenza = potenza - 1;
        
    }
       printf("il risultato e'%d\n",risultato);
return 0;
}  
     
     
     
     
    