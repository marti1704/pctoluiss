/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int prezzo;
    int sconto;
    int n_ordini;
    float totale;
    
    prezzo=5;
    n_ordini=1;
    while(n_ordini>0)
    {
    printf("quanti ordini?\n");
    scanf("%d",&n_ordini);
    if(n_ordini<=30)
    {
        totale=n_ordini*prezzo;
        printf("il totale che devi devi pagare e':%f\n",totale);
    }
    else if (n_ordini>=30 && n_ordini>=50)
    {
        totale=n_ordini*prezzo*(1-0.10);
        printf("il totale scontato e':%f\n",totale);
    }
   else
   {
       totale= n_ordini*prezzo*(1-0.15);
       printf("il totale scontato e':%f\n",totale);
       
 }
    
   
}
}
