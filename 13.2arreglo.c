/*ARREGLOS EN C*/
/*es una identidad estática */
/*Siempre inician con la posicion 0*/
/**/
#include<stdio.h>
int main()
{   int size;
    int i;
    printf("crearemos un arreglo \n");
    printf("ingrese el numero de elementos del arreglo\n");
    scanf("%i", &size);
    int arreglo[size];
    
    for (i = 0; i < size; i++)
    {
        printf("ingrese el elemento  %i\n", i+1);
        scanf("%i", &arreglo[i]);
    }
printf("el arreglo queda como:\n");
    for (i = 0; i < size; i++)
    {
         
      printf(" %i", arreglo[i]);
     
    }
    
    
    return 0;
}  
