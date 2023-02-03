/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void ft_ft(int  *array, int dimensione )
{
    int i;
    int temp;
    int z;

    temp=0;
    i=0;
   
 while(i<dimensione-1) 
 { 
    z=i+1;
     while(z<dimensione)
     {
    if(array[i]>array[z])
    {
       temp=array[i];
       array[i]=array[z];
       array[z]=temp;
    }
    z=z+1;
 }
   i=i+1;
 }  
}

int main()
{
   
    int array[]={7,2,5,9,4,1,3};
    int dimensione=7;
    int i=0;
    
    ft_ft(array,dimensione);
    while(i<dimensione)
    {
        printf("%d\n",array[i]);
        i=i+1;
    }
  

    return 0;
}
