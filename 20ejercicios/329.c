#include <stdio.h>
int main() {
 /* Se usan identificadores descriptivos y la constante para la conversion
a kWh, aplicando un descuento del 5% al resultado final. */
// Constantes y variables
const int MIL = 1000 ;
const float VALOR_DESCUENTO = 0.05 ;
// Lectura de variables
float potencia ;
float tiempo ;
float energia_kwh ;
float descuento ;
float resultado_final ;
printf("Ingrese la potencia en watts: ") ;
scanf("%f", &potencia) ;
printf("Ingrese el tiempo de uso en horas: ") ;
scanf("%f", &tiempo) ;
// Calculo de la energia consumida en kWh usando la constante literal de conversion
energia_kwh = (potencia * tiempo) / MIL ;
// Evaluacion logica requerida
if (energia_kwh > 0) {
// Calculo del descuento del 5% y del resultado final
descuento = energia_kwh * VALOR_DESCUENTO ;
resultado_final = energia_kwh - descuento ;
// Muestra de resultados por pantalla
printf("El consumo en kWh es: %.2f\n", energia_kwh) ;
printf("El resultado final con el descuento aplicado es: %.2f\n", resultado_final) ;
} else {
printf("Error: El consumo de energia debe ser mayor a cero.\n") ;
}
return 0 ;
}