/*CICLI WHILE*/
/* se ejecuta siempre que la condicion sea verdadera*/

#include<stdio.h>
int main()
{
    int contador;
    while(contador <=10)
    {
        printf("%i\n", contador);
        contador++; //aumenta 1 a 1 //
    }


    int cumsum=0;
    int i=0;
    while (i<=2)
    {
       cumsum=cumsum+i;
       i++;
    printf("elementos %d\n", cumsum );
    }
    printf("La suma es %d\n", cumsum);
    return 0;
}
