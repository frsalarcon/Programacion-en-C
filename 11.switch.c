/* INSTRUCCIÓN SWITCH EN C*/
#include<stdio.h>
int main()
{ /* etiquetas case y caso opcional fault*/
    int casos;
    printf("ingresa un numero");
    scanf("%i", &casos);
    switch(casos)
    {
        case 1:
        printf("elegiste el caso 1 \n");
            break;

        case 2:
        printf("elegiste el caso 2 \n");
            break;

        case 3:
        printf("elegiste el caso 3 \n");
            break;  

        case 4:
        printf("elegiste el caso 4 \n");
            break;  

        case 5:
        printf("elegiste el caso 5 \n");
            break;  

        default:
        printf("NO encontramos el caso\n");
        break;
        

    }
    return 0;
}
