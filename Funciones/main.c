#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float functPitagoras (float c1, float c2);// Prototipo de la funcion que recibe los catetos y calcula la hipotenusa del triangulo rectangulo

int main()
{
    float cat1, cat2, hip;

    printf("\t\t\t\tLibreria Math.h - Funciones creadas por el programador. \n\nAlgoritmo que calcula la hipotenusa de triangulos rectangulos.\n\n");
    printf("Ingrese el valor del primer cateto:\n");
    scanf("%f", &cat1);
    printf("Ingrese el valor del segundo cateto:\n");
    scanf("%f", &cat2);
    hip = functPitagoras(cat1,cat2);
    printf("La hipotenusa del triangulo es: %.2f \n", hip);
    return 0;
}

float functPitagoras (float c1, float c2)
{
    float h;
    h = sqrt(pow(c1,2)+pow(c2,2));
    return h;
}
