/*DO WHILE, EJECUTA UN BLOQUE DE INSTRUCCIONES Y DESPUES SE EVALUA UNA CONDICION */
#include<stdio.h>
int main()
{
    int number = 1;
    printf("muptiplicacion de la tabla 5\n");
    do{
        printf("5 x %d = %d\n", number, 5*number);
        number++;
    }
    while(number <=10);
    return 0;
}
