#include<stdio.h>
int main() {
    /* declaramos las variables */
    int num1;
    int num2;
    int resultado;
    printf("Ingrese el primer  valor:\n");
    /* Para lectura de datos: scanf*/
    /* scanf tiene dos argumentos: "tipo de argumento" {ej %d:entero decimal} */
    /* argumento 2: "&" operador de direccion, ruta o variable donde se almacena el valor */
    scanf("%d", &num1);   
    printf("Ingrese el segundo valor:\n");
    scanf("%d",&num2);
    /*Definimos una funcion*/
    resultado = num1 + num2; /* + / - */
    printf(" El resultado de la suma es: %d\n ", resultado);
    return 0;
}
