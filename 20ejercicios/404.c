#include <stdio.h>
#include <math.h>
int main() {
/* Se disenja un algoritmo para calcular el interes y el monto total
en una libreria, utilizando una constante literal para el porcentaje
y evaluando si el resultado es par o impar. */
printf("=== SISTEMA DE CALCULO DE INTERES - LIBRERIA ===\n") ;
// Constante y cabecera descriptiva
const int CIEN = 100 ;
// Lectura de variables
float capital ;
float tasa ;
int tiempo ;
float interes_generado ;
float monto_total ;
printf("Ingrese el capital inicial: ") ;
scanf("%f", &capital) ;
printf("Ingrese la tasa de interes (en porcentaje): ") ;
scanf("%f", &tasa) ;
printf("Ingrese el tiempo en years: ") ;
scanf("%d", &tiempo) ;
// Verificacion de rango para las variables de entrada
if (capital > 0 && tasa > 0 && tiempo > 0) {
    // Calculo del interes y monto total
    interes_generado = (capital * tasa * tiempo) / CIEN ;
    monto_total = capital + interes_generado ;
// Muestra del desglose por pantalla
printf("El interes generado es: %f\n", interes_generado) ;
printf("El monto total es: %f\n", monto_total) ;
// Determinacion si el resultado es par o impar
if (fmod(monto_total, 2) == 0) {
    printf("El monto total es un numero par.\n") ;
} else {
    printf("El monto total es un numero impar.\n") ;
}
} else {
    printf("Error: Los valores ingresados deben ser mayores a cero.\n") ;
}   
    return 0 ;
}