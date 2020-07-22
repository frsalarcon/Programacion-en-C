/*Variables*/

#include<stdio.h>
int main(){
/* char = caracter a una variable, tamaño de 1 byte, range =  0 ...255*/    
    char C = 'y';
    // 2 byte, rango -32768 ... 32767 intenger //
    int  a = 20; 
    // short tipo de dato entero pero corto 2 byte, rango -128...127 //
    short e = -1;
    //unsigned, sin signo -  2 byte 0 .... 65535//
    unsigned int u =25;
    //long, tipo de dato entero pero largo, 4 byte, rango -2147483648 ... 2147483647//
     //li : long interger
    long l = 5932;
    printf("%li\n", l)
   // FLoat : numeros reales, punto decimal. 4 byte
   // %2.f dos decimales del float//
   float f = 72.5236
   printf("%.2f\n",f)
   
   //double es un float muy grande, ocupa 8 bytes//
   double d = 12323.87788
   printf("%.2lf\n",f)
    
    printf("%c\n", C);
    
    return 0;
}