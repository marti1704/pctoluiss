/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void ft_ft(int*nbr,int*x)
{
    *nbr=42;
    *x=12;
}
int main()
{
   int nbr=2;
   int x=7;
   
   
   printf("il valore iniziale:%d\n",x);
   ft_ft(&x,&nbr);
   
   printf("il valore di:%d\n",x);
   printf("il valore effettivo dopo aver richiamato ft_ft:%d\n",nbr);
   return 0;
}