// Ciclo for. Hace el ciclo con cierta condicion// 
#include<stdio.h>
int main()
{
    int contador;
    for(contador=1;contador <=10; contador++) //inicia el contador// //No se cierra ;//
    {
    printf("%i\n",contador);
    }
    int cumsum= 0;
    int i;
    for (i = 1; i < 100; i++)
    {
       cumsum= cumsum+i;
    }
    printf("la suma es %d\n", cumsum);
    return 0;
}
/*CONTADOR ES 1 Y ES MENOR A 10 POR LO TANTO SE CUMPLE Y SIGUE EL CICLO*/
/*CONTADOR SE SUMA A SI MISMO*/

/*for (size_t i = 0 INICIO; i < count; i++)
{
    /* code */
//}


/*
for (init_expression; loop_condition; loop_expression) {
  program_statements
}
*/