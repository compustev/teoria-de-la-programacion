#include <stdio.h>
int main () { 
/* Se usan constantes simbolicas para los porcentajes para dar flexibilidad al codigo,
permitiendo ajustar la ponderacion de las evaluaciones en el futuro sin alterar la formula. */

//Constantes y variables
const int A = 100 ;
const float FACTOR = 1.5 ;
float nota1 ;
float nota2 ;
float nota3 ;
float p1 ;
float p2 ;
float p3 ;
float promedio_ponderado ;
float cociente ;
printf("Ingrese la primera nota (0-10): ") ;
scanf("%f", &nota1) ;
printf("Ingrese la segunda nota (0-10): ") ;
scanf("%f", &nota2) ;
printf("Ingrese la tercera nota (0-10): ") ;
scanf("%f", &nota3) ;
printf("Ingrese el porcentaje de la primera nota (0-100): ") ;
scanf("%f", &p1) ;
printf("Ingrese el porcentaje de la segunda nota (0-100): ") ;
scanf("%f", &p2) ;
printf("Ingrese el porcentaje de la tercera nota (0-100): ") ;
scanf("%f", &p3) ;

// Verificacion de rango para cada variable de entrada (notas entre 0 y 10, porcentajes positivos)

promedio_ponderado = (nota1 * p1 + nota2 * p2 + nota3 * p3) / A ;
if (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10 && nota3 >= 0 && nota3 <= 10 && p1 >= 0 && p2 >= 0 && p3 >= 0) {
    if ((p1 + p2 + p3) == A) {
        promedio_ponderado = (nota1 * p1 + nota2 * p2 + nota3 * p3) / A ;
        printf("El promedio ponderado es: %.2f\n", promedio_ponderado) ;
        cociente = promedio_ponderado / FACTOR ;
        printf("El cociente con el factor 1.5 es: %.2f\n", cociente) ;
    } else {
        printf("Error: La suma de los porcentajes debe ser exactamente 100.\n") ;
    }
} else {
    printf("Error: Alguna nota o porcentaje esta fuera del rango valido.\n") ;
}
}
