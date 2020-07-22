/* Operadores de igualdad 
    == x igual a y
    != x distinto de y
    >
    <
    >=
    <=
 */
#include<stdio.h>
   
    int main()
    {

        int edad;
        printf("ingresa tu edad\n");
        scanf("%d", &edad);
        if (edad<=18)
        {
       printf("eres menor de edad\n");
         }
        else
        {
        printf("eres mayor de edad\n");
        }
    

    return 0;    
    }