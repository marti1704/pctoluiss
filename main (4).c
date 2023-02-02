/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float ft_potenza(float numero,float potenza)
{
    float risultato=1;
    float risultato2;
    
    if(potenza>=0)
{    
    while(potenza>0)
    {
         risultato= risultato*numero;
         potenza = potenza - 1;
    } 
       return risultato;
}
   else if (potenza<0)
 {
      while(potenza<0)
      {
      risultato= risultato*numero;
      potenza = potenza+1;
      risultato2=1/risultato;
      }
 
      return risultato2;
      }
 }
float main()
{
    float numero;
    float potenza;
    float risultato;
    
    printf("prendere un numero da elevare alla potenza\n");
    scanf("%f",&numero);
    printf("di quanto vuoi elevare numero\n");
    scanf("%f",&potenza);
    risultato=ft_potenza(numero,potenza);
    printf("il risultato e'%f\n",risultato);
return 0;
}  
     
     
     
     
    