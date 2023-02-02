/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  
   char str[]="ciao";
   int i=0;
   
    
    while(str[i]!='\0')
    {
        i=i+1;
    }
    while(i>0)
    {
        i=i-1;
        printf("%c",str[i]);
    }
   
    return 0;
}
