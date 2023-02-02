/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int divisione(int n1,int n2,int *quoziente,int *resto)
{
    *quoziente= n1/n2;
    *resto=n1%n2;
}
int main()
{
  int n1;
  int n2;
  int quoziente;
  int resto;
  printf("inserisci il dividendo e il divisore\n");
   scanf("%d %d",&n1,&n2);
    if(n2==0)
    {
        printf("non puoi dividere per 0\n");
    }
    divisione (n1,n2,&quoziente,&resto);
    printf("il quoziente e':%d\n", quoziente);
    printf("il resto e':%d\n",resto);
   
    return 0;
}
