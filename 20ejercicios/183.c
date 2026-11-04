#include <stdio.h>
#include <string.h>
int main() {
//DESCRIPCIÓN DE PASOS A SEGUIR:
//1. Mostrar mensaje de bienvenida personalizado de la agencia de viajes.
//2. Definir las constantes simbolicas (factores de uso y tasa de degradacion mensual).
//3. Leer los datos de la bateria (capacidad, consumo promedio, tipo de uso y edad).
//4. Asignar el factor correspondiente segun el tipo de uso ('R', 'N', 'I').
//5. Calcular la duracion estimada aplicando la formula de capacidad, degradacion y consumo.
//6. Aplicar el descuento/ajuste del 5% al resultado final.
//7. Mostrar por pantalla los resultados y la duración estimada.

// Mensaje de bienvenida personalizado
printf("-------------------------------------------------------\n");
printf("  BIENVENIDO A LA AGENCIA DE VIAJES - SOPORTE TECNICO  \n");
printf("-------------------------------------------------------\n");

//Definición de constantes simbólicas
const float FACTOR_REPOSO = 0.5 ;
const float FACTOR_NORMAL = 1.0 ;
const float FACTOR_INTENSIVO = 2.5 ;
const float DEGRADACION_MENSUAL = 0.02 ;

//Lectura y declaracion 
float capacidad ;
float consumo_promedio ;
char tipo_uso ;
int edad ;
float factor ;
float duracion ;
float duracion_des ;
printf("Ingrese la capacidad de la bateria (mAh): ");
scanf("%f", &capacidad);
printf("Ingrese el consumo promedio (mA): ");
scanf("%f", &consumo_promedio);
printf("Ingrese el tipo de uso (R: Reposo, N: Normal, I: Intensivo): ");
scanf(" %c", &tipo_uso);
printf("Ingrese la edad de la bateria (en meses): ");
scanf("%d", &edad);

//Asignacion del factor segun el tipo de uso mediante condicionales
if (tipo_uso == 'R')  {
    factor = FACTOR_REPOSO ;
} else if (tipo_uso == 'N') {
    factor = FACTOR_NORMAL ;
} else if (tipo_uso == 'I') {
    factor = FACTOR_INTENSIVO ;
} else {
    factor = FACTOR_NORMAL ; // Valor por defecto si ingresa otra letra
}

//Calculo aritmetico de la duracion estimada de la bateria
duracion = (capacidad * (1 - (edad * DEGRADACION_MENSUAL))) / (consumo_promedio * factor) ;
// Aplicar descuento del 5% al resultado final
duracion_des = duracion * 0.95 ;
//Mostrar los resultados por pantalla
printf("\n      REPORTE DE DURACION DE BATERIA            \n" );
printf("Duracion estimada base (horas): %.2f\n", duracion );
printf("Duracion final con ajuste del 5%%: %.2f\n", duracion_des );

return 0;
}