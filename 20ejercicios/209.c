#include <stdio.h>
#include <math.h>
#include <string.h>
int main () {
    //--------------------------------------------
//DESCRIPCION DE PASOS A SEGUIR:
//1. Identificar el tipo de dato de cada variable.
//2. Leer la masa en gramos (real) y el volumen en cm3 (real).
//3. Evaluar la expresion logica (volumen > 0) para evitar la division por cero.
//4. Calcular la densidad usando la formula: densidad = masa / volumen.
//5. Calcular el logaritmo en base 10 del resultado (siempre que densidad > 0).
//6. Mostrar por pantalla la densidad calculada.
//7. Mostrar un resumen completo de los datos ingresados y procesados al final.
//--------------------------------------------

//IDENTIFICACION DE TIPOS DE DATOS :
//- masa: real, porque representa una medicion fisica en gramos que admite decimales.
//- volumen: real, porque el volumen en cm3 puede incluir fracciones decimales.
//- densidad: real, porque resulta de la division (masa / volumen) y puede generar decimales.
//- log_densidad: real, porque la funcion logaritmica devuelve valores reales.
/* - valor: cadena de caracteres, porque almacena un estado textual 
("valido" o "error") para indicar la validez de los datos ingresados. */
//Lectura y declaracion de variables

float masa;
float volumen;
float densidad;
float log_densidad;
char valor[10];


printf("Ingrese la masa en gramos: ");
scanf("%f", &masa);
printf("Ingrese el volumen en cm3: ");
scanf("%f", &volumen);

//Validacion  volumen sea mayor que cero y algoritmo
if (volumen > 0) {
    densidad = (masa / volumen) ;
    log_densidad = log10(densidad) ;
    strcpy(valor, "valido");
} else {
    strcpy(valor, "error");
    printf("Error: Volumen debe ser mayor a cero\n") ;
}


// Resumen de los datos ingresados al final del algoritmo
printf("--------------------------------------------------\n") ;
printf("                RESUMEN DE DATOS                  \n") ;
printf("--------------------------------------------------\n") ;
printf("Masa ingresada (g): %.2f g\n", masa) ;
printf("Volumen ingresado (cm3): %.2f cm3\n", volumen) ;
printf("Densidad calculada (g/cm3): %.2f g/cm3\n", densidad) ;
printf("Logaritmo base 10 de la densidad: %.2f\n", log_densidad) ;
printf("Estado: %s\n", valor) ;
printf("--------------------------------------------------\n") ;
return 0 ;
}