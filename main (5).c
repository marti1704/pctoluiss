/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void ft_ultimate_ft(int*********nbr)
{
    *********nbr=42;
    
}
int main()
{
   int a, *b, **c, ***d, ****e, *****f, ******g, *******h, ********i, *********l;
   
   a=1;
   b=&a;
   c=&b;
   d=&c;
   e=&d;
   f=&e;
   g=&f;
   h=&g;
   i=&h;
   l=&i;
   
  
   ft_ultimate_ft(l);
   
   
   printf("%d\n",*********l);
   return 0;
}
