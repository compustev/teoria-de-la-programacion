#include <stdio.h>
#include <math.h>
int main() {
//Constantes y variables
const int A = 100 ;
float precio ;
float porcentaje ;
float monto_descuento ;
float precio_final ;
float suma_acumulada ;
printf("Ingrese el precio del producto: ") ;
scanf("%f", &precio) ; 
printf("Ingrese el porcentaje de descuento (0-100): ") ;
scanf("%f", &porcentaje) ;
//Formulas
monto_descuento = precio * ( porcentaje / A ) ;
precio_final = precio - monto_descuento ;
suma_acumulada = monto_descuento + precio ;
//Condicional
if (porcentaje >= 0 && porcentaje <= 100) {
    printf("Su descuento es de: %.2f%%\n", porcentaje) ;
} else {
    printf("No tiene descuento\n") ;
}
//Desglose
printf("---------------------------\n") ;
printf("          DESGLOSE         \n") ;
printf("---------------------------\n") ;
printf("El precio original es: %.2f\n", precio) ;
printf("El porcentaje de descuento es: %.2f%%\n", porcentaje) ;
printf("El monto del descuento es: %.2f\n", monto_descuento) ;
printf("La suma acumulada es: %.2f\n", suma_acumulada) ;
printf("El precio final es: %.2f\n", precio_final) ;
}