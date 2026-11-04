#include <stdio.h>
int main() {

// DESCRIPCIÓN DE PASOS A SEGUIR:
// 1. Definir las constantes simbolicas (precios base por plan, costo por perfil extra y perfiles incluidos).
// 2. Leer los datos de entrada (numero de servicios, plan, cantidad de perfiles y calidad de video).
// 3. Evaluar el precio base segun el tipo de plan ('B', 'E', 'P').
// 4. Calcular el costo de los perfiles adicionales si superan los perfiles incluidos.
// 5. Calcular el costo total mensual sumando el precio base y los perfiles extra.
// 6. Aplicar un descuento del 5% al resultado final.
// 7. Mostrar por pantalla el detalle de los costos y la verificación con valores limite.

// Definicion de constantes simbolicas
const float PRECIO_B = 7.99 ;
const float PRECIO_E = 11.99 ;
const float PRECIO_P = 15.99 ;
const float COSTO_PERFIL_EXTRA = 2.0 ;
const int PERFILES_INCLUIDOS = 2 ;

//Lectura y declaracion 
int num_servicios ;
char plan ;
int perfiles ;
char calidad ;
float precio_base ;
float perfiles_extra ;
float costo_perfiles ;
float costo_mensual_unitario ;
float costo_total ;
float costo_final ; 
printf("Ingrese el numero de servicios contratados: ") ;
scanf("%d", &num_servicios) ;
printf("Ingrese el tipo de plan (B: Basico, E: Estandar, P: Premium): ") ;
scanf(" %c", &plan) ;
printf("Ingrese la cantidad de perfiles: ") ;
scanf("%d", &perfiles) ;
printf("Ingrese la calidad del video ( 'S' SD, 'H' HD, '4' 4K): ") ;
scanf(" %c", &calidad) ;

// Evaluacion del precio base segun el plan seleccionado
if (plan == 'B') {
    precio_base = PRECIO_B ;
} else if (plan == 'E') {
    precio_base = PRECIO_E ;
} else if (plan == 'P') {
    precio_base = PRECIO_P ;
} else {
    printf("Plan no valido. Se asigna el plan Basico por defecto.\n") ;
    precio_base = PRECIO_B ;
}
//Calidad de video
if (calidad == 'S') {
    printf("La calidad de video seleccionada es SD.\n") ;
} else if (calidad == 'H') {
    printf("La calidad de video seleccionada es HD.\n") ;
} else if (calidad == '4') {
    printf("La calidad de video seleccionada es 4K.\n") ;
} else {
    printf("Calidad de video no valida. Se asigna SD por defecto.\n") ;
    calidad = 'S' ;
}

//Calculo de perfiles extra (si la cantidad supera los incluidos)
if (perfiles > PERFILES_INCLUIDOS) {
    perfiles_extra = perfiles - PERFILES_INCLUIDOS ;
    costo_perfiles = perfiles_extra * COSTO_PERFIL_EXTRA ;
} else {
    costo_perfiles = 0.0 ;
}

//Calculo aritmetico del costo mensual total (por servicio) y multiplicado por los servicios contratados
costo_mensual_unitario = precio_base + costo_perfiles ;
costo_total = costo_mensual_unitario * num_servicios ;

//Aplicar descuento del 5% al resultado final
costo_final = costo_total * 0.95 ;

//Mostrar los resultados por pantalla
printf("--- DETALLE DE COSTOS DE STREAMING ---\n") ;
printf("Numero de servicios contratados: %d\n", num_servicios) ;
printf("Costo mensual sin descuento: %.2f\n", costo_total) ;
printf("Costo final con descuento del 5%%: %.2f\n", costo_final) ;

return 0 ;

}