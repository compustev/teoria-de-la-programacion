#include <stdio.h>
int main() {
/* Constante simbolica para fijar el valor de referencia
evitando numeros magicos y permitiendo cambiar la base de comparacion. */

// Constante simbolica y literal
const float VALOR_REF = 50.0 ;
// Lectura de variables
float total ;
float parte ;
float porcentaje ;
float porcentaje_referencia ;
printf("Ingrese la cantidad total: ") ;
scanf("%f", &total) ;
printf("Ingrese la parte correspondiente: ") ;
scanf("%f", &parte) ;
// Evaluacion logica para evitar division entre cero o valores negativos
if (total > 0) {
    porcentaje = (parte / total) * 100 ;
    porcentaje_referencia = (porcentaje / VALOR_REF) * 100 ;
    printf("El porcentaje calculado es: %.2f%%\n", porcentaje) ;
    printf("El porcentaje respecto al valor de referencia es: %.2f%%\n", porcentaje_referencia) ;
} else {
    printf("Error: La cantidad total debe ser mayor a cero.\n") ;
}
}