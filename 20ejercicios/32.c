#include <stdio.h>
#include <math.h>
int main(){
    const float LIBRA_KG = 0.453592 ;
    float libras ;
    float kg ;
    float log_result ;
    printf("Ingrese el peso en libras: ");
    scanf("%f", &libras);
    kg = libras * LIBRA_KG ;
    if (kg > 0) {
    log_result = log10(kg) ;
    printf("X libras equivalen a Y kg: %.2f %.2f\n", libras, kg);
    printf("Logaritmo en base 10 de los kg:  %.2f\n", log_result);
    } else {
    printf("El peso debe ser mayor a cero.\n");
    }
    printf("Los kilogramos equivalentes son: %.2f\n", kg);
    printf("Variables y constantes auxiliares son:\n");
    printf("El logaritmo en base 10 del resultado es: %.2f\n", log_result);
    printf("Constante simbolica LIBRA_KG: %.6f\n", LIBRA_KG);
    return 0;
}