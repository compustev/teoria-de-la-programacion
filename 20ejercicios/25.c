#include <stdio.h>
#include <math.h>
int main() {
//--------------------------------------------
// DESCRIPCION DE PASOS A SEGUIR:
// 1. Justificar el tipo de dato de cada variable.
// 2. Leer la cantidad total y la parte (reales).
// 3. Evaluar la expresion logica (total > 0) para prevenir errores matematicos.
// 4. Calcular el porcentaje usando la constante literal 100: porcentaje = (parte / total) * A.
// 5. Calcular el resultado elevado al cubo.
// 6. Mostrar por pantalla los resultados.
//--------------------------------------------

// JUSTIFICACION DE TIPOS DE DATOS:
// - total: real, porque representa una cantidad monetaria o fisica que puede incluir decimales.
// - parte: real, porque la porcion de la joyeria puede medirse con valores decimales.
// - porcentaje: real, porque la division y multiplicacion proporcional genera cifras con decimales.
// - b: real y no constante , porque aunque el ejercicio nos pida porcentaje al cubo, al dejarlo como variable , cuando se necesite se puede cambiar ese valor.
// - resultado_cubo: real, porque elevar un numero real al cubo mantiene un valor de tipo real.

//Constantes
const int A = 100 ;
//Lectura y declaracion de variables
float total ;
float parte ;
int b ;
float porcentaje ;
float porcentaje_cubo ;
printf("Ingrese la cantidad total de joyeria: ") ;
scanf("%f", &total) ;
printf("Ingrese la parte de joyeria: ") ;
scanf("%f", &parte) ;
printf("Ingrese el valor de b: ") ;
scanf("%d", &b) ;
//Formula del porcentaje
porcentaje = ((parte / total) * A) ;

//Evaluacion de la expresion (total>0) con el porcentaje elevado
if (total > 0) {
    porcentaje_cubo = pow(porcentaje, b) ;
    printf("Su porcentaje es: %.2f%%\n", porcentaje) ;
    printf("Porcentaje elevado al cubo: %.2f\n", porcentaje_cubo) ;
} else {
    printf("Error: La cantidad total no puede ser menor a cero\n") ;
}
return 0 ;
}