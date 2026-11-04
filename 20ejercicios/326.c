#include <stdio.h>
#include <math.h>
int main() {
/* Se usa una constante simbolica para la equivalencia de la pulgada
para centralizar el valor de conversion y facilitar cambios futuros. */
// Constante y variables
const float PULGADA_CM = 2.54 ;
// Lectura de variables
float pulgadas ;
float cm ;
float cm_redondeado ;
printf("Ingrese la medida en pulgadas: ") ;
scanf("%f", &pulgadas) ;
// Verificacion de rango 
if (pulgadas > 0) {
    cm = pulgadas * PULGADA_CM ;
    if (cm > 0) {
        cm_redondeado = round(cm * 100) / 100 ;
        printf("%.2f pulgadas equivalen a %.2f cm\n", pulgadas, cm_redondeado) ;
    } else {
        printf("Error: El resultado en centimetros no es valido.\n") ;
    }
} else {
    printf("Error: La medida en pulgadas debe ser mayor a cero.\n") ;
}
    return 0;
}