#include <stdio.h>
#include <math.h>

int main() {
    float z ;
    float w ;
    float suma ;
    float resta ;
    float producto ;
    float cociente ; 
    float resto ;

    printf("Ingrese el valor de z: ");
    scanf("%f", &z);
    printf("Ingrese el valor de w: ");
    scanf("%f", &w);

    suma = z + w;
    resta = z - w;
    producto = z * w ;

    if (w != 0) {
        cociente = z / w ;
        printf("El cociente entre z y w es: %.2f\n", cociente);
        resto = fmod(z, w);
        printf("El resto de la division es: %.2f\n", resto);
    } else {
        printf("w = 0 , no se puede ser divisor" );
        printf("No se puede hacer division por 0" );
    }
    printf("La suma de z y w es: %.2f\n", suma);
    printf("La resta de z y w es: %.2f\n", resta);
    printf("El producto de z y w es: %.2f\n", producto);
    printf("Operaciones finalizadas" )  ;
    return 0;
}