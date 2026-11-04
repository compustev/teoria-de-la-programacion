#include <stdio.h>
int main() {
/* Se usa una constante simbolica para la equivalencia de la onza a gramos,
evitando numeros magicos y facilitando la conversion y el calculo del inverso multiplicativo. */
// Constante simbolica y variables
const float ONZA_GRAMO = 28.3495 ;
// Lectura de variables
float onzas ;
float gramos ;
float inverso ;
printf("Ingrese el peso en onzas: ") ;
scanf("%f", &onzas) ;
// Verificacion relacional de entrada
if (onzas > 0) {
    // Calculo principal de la equivalencia en gramos
gramos = onzas * ONZA_GRAMO ;
    // Evaluacion relacional requerida
if (gramos > 0) {
    // Calculo del inverso multiplicativo
    inverso = 1 / gramos ;
    // Muestra de resultados por pantalla
    printf("%f onzas equivalen a %f gramos\n", onzas, gramos) ;
    printf("El inverso multiplicativo es: %f\n", inverso) ;
    // Muestra de tabla simulada con los datos y resultados
    printf("----------------------------------------\n") ;
    printf("| ONDAS (oz) | GRAMOS (g) | INVERSO    |\n") ;
    printf("----------------------------------------\n") ;
    printf("| %f | %f | %f |\n", onzas, gramos, inverso) ;
    printf("----------------------------------------\n") ;
} else {
    printf("Error: El resultado en gramos no es valido.\n") ;
}
} else {
    printf("Error: El peso en onzas debe ser mayor a cero.\n") ;
}
 
return 0 ;
}