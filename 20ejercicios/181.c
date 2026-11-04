#include <stdio.h>
int main() {
    //Descripción breve de los pasos a seguir:
//1. Leer los ingresos y los gastos familiares.
//2. Calcular la suma de gastos, el ahorro y el presupuesto base.
//3. Aplicar un descuento del 5% al resultado final.
//4. Evaluar si los gastos de vivienda y alimentación respetan los límites permitidos.
//5. Mostrar los resultados y alertas por pantalla.

//Definición de constantes simbolicas
const float PORCENTAJE_MAX_VIVIENDA = 0.30 ;
const float PORCENTAJE_MAX_ALIMENTACION = 0.20 ;
const float PORCENTAJE_MIN_AHORRO = 0.10 ;

//Lectura de datos y declaracion de variables 
float ingreso_total ;
float gasto_vivienda ;
float gasto_alimentacion ;
float gasto_transporte ;
float gasto_educacion ;
float suma_gastos ;
float ahorro ;
float presupuesto ;
float presupuesto_des ;
printf("Ingrese el ingreso total de la familia: ");
scanf("%f", &ingreso_total);    
printf("Ingrese el gasto de vivienda: ");
scanf("%f", &gasto_vivienda);
printf("Ingrese el gasto de alimentacion: ");
scanf("%f", &gasto_alimentacion);
printf("Ingrese el gasto de transporte: ");
scanf("%f", &gasto_transporte);
printf("Ingrese el gasto de educacion: ");
scanf("%f", &gasto_educacion);

//Calculos
suma_gastos = gasto_vivienda + gasto_alimentacion + gasto_transporte + gasto_educacion ;
ahorro = (ingreso_total - suma_gastos) ;
presupuesto = gasto_vivienda + gasto_alimentacion + gasto_transporte + gasto_educacion;   
presupuesto_des = presupuesto * 0.95 ;

//Evaluaciones y validaciones de limites con las constantes
if (gasto_vivienda > (ingreso_total * PORCENTAJE_MAX_VIVIENDA)) {
    printf("Gasto de vivienda se excede al presupuesto\n");
} else {
    printf("Gasto de vivienda esta dentro del presupuesto\n");
}
if (gasto_alimentacion > (ingreso_total * PORCENTAJE_MAX_ALIMENTACION)) {
    printf("Gasto de alimentacion se excede al presupuesto\n");
} else {
    printf("Gasto de alimentacion esta dentro del presupuesto\n");
}
if (ahorro < (ingreso_total * PORCENTAJE_MIN_AHORRO)) {
    printf("El ahorro es inferior al 10%% minimo requerido.\n");
} else {
    printf("El ahorro cumple con la meta minima requerida.\n");
}
//Mostrar el presupuesto y resultados finales por pantalla
printf("--- PRESUPUESTO FAMILIAR ---\n");
printf("Presupuesto total (suma de gastos): %.2f\n", presupuesto);
printf("Presupuesto con el 5%% de descuento: %.2f\n", presupuesto_des);
printf("Ahorro calculado: %.2f\n", ahorro);

return 0;
}