#include <stdio.h>
#include <math.h>
int main() {
//--------------------------------------------
//DESCRIPCION DE PASOS A SEGUIR:
//1. Leer el peso en kilogramos (real) ingresado en la farmacia.
//2. Calcular la equivalencia en gramos usando la constante literal 1000.
//3. Evaluar la expresion logica (gramos >= 0) y almacenar el resultado.
//4. Calcular el logaritmo en base 10 del resultado en gramos.
//5. Mostrar por pantalla la equivalencia en formato 'X kg equivalen a Y gramos'.
//6. Agregar un resumen detallado de los datos ingresados al final.
//--------------------------------------------

//Lectura y declaracion de variables
float kg ;
float gramos ;
float log_resultado ;
int es_valido ;
printf("Ingrese el peso en kilogramos: ") ;
scanf("%f", &kg) ;

//Validacion previa para asegurar que el peso sea valido
if (kg >= 0) {
    //Calculo de la equivalencia en gramos usando la constante literal 1000
    gramos = kg * 1000 ;
    //Evaluacion de la expresion logica requerida
    es_valido = (gramos >= 0) ;
    //Calculo adicional: Logaritmo en base 10 del resultado (siempre que gramos > 0)
    if (gramos > 0) {
        log_resultado = log10(gramos) ;
    } else {
        log_resultado = 0 ; // Caso límite cuando los gramos son exactos a 0
    }
//Mostrar por pantalla el formato solicitado
    printf("%.2f kg equivalen a %.2f gramos\n", kg, gramos) ;
    printf("Logaritmo en base 10 del resultado en gramos: %.2f\n", log_resultado) ;
} else {
    printf("Error: El peso ingresado no puede ser un valor negativo.\n") ;
} 


//Resumen de los datos ingresados al final del algoritmo
printf("--------------------------------------------------\n") ;
printf("                RESUMEN DE DATOS                  \n") ;
printf("--------------------------------------------------\n") ;
printf("Peso original ingresado (kg): %.2f\n", kg) ;
printf("Peso convertido (gramos): %.2f \n", gramos) ;
printf("Evaluacion logica (gramos >= 0): %d\n", es_valido) ;
printf("--------------------------------------------------\n") ;

return 0 ;
}