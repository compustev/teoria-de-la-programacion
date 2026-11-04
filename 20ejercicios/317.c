#include <stdio.h>
#include <math.h>
int main() {
const float TASA_CAMBIO = 1.08 ;
//Lectura de variables
float euros ;
float dolares ;
float raiz_resultado ;
int codigo_exito ;

printf("Ingrese el monto en euros: ") ;
scanf("%f", &euros) ;
//Evaluacion de verificar 
if (euros > 0) {
     dolares = euros * TASA_CAMBIO ;
     codigo_exito = 0 ;
     raiz_resultado = sqrt(fabs(dolares)) ;
    printf("%.2f euros equivalen a %.2f dolares\n", euros, dolares) ;
    printf("La raiz cuadrada del valor absoluto es: %.2f\n", raiz_resultado) ;
    printf("Codigo de finalizacion: %d\n", codigo_exito) ;
} else {
    printf("Error: El monto en euros debe ser mayor a cero.\n") ;
}
}