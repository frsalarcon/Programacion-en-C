/*Directivas de preprocesador
Librerias y macros, siempre empiezan con #*/
#include<stdio.h>
/*#include"nombre de el archivo"*/
/*Entre comillas busca el archivo en el directorio donde se compila el programa*/
/*< > lo busca en el encabezado de la biblioteca estandar*/
/*math lib... etc*/




/*Directiva define: Cte simbolicas y macros*/

#define PI 3.14159
/*#define cube(a) a*a*a*/ 
/*las macros ahorran tiempo en el programa ya que no se declara una funcion*/
 int main() {
    int suma;
    suma = PI + 1;
    printf ("%i\n", suma);
    return 0;
}