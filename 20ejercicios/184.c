#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
//DESCRIPCION DE PASOS A SEGUIR:
//1. Definir las constantes simbolicas (ingreso minimo, enganche minimo, deuda maxima y meses por year).
//2. Leer los datos financieros del cliente y del inmueble (ingreso, valor, enganche, plazo, interes, compromisos).
//3. Calcular el monto del credito, los meses totales, la tasa mensual, la cuota mensual y el ratio de endeudamiento.
//4. Evaluar las expresiones logicas compuestas para aprobar o rechazar el credito hipotecario.
//5. Aplicar un descuento del 5% al monto final del credito.
//6. Mostrar por pantalla la evaluacion detallada y los resultado
//7. Presentar la seccion de conclusiones.

//Definición de constantes simbólicas
const int INGRESO_MIN = 1500 ;
const float ENGANCHE_MIN = 0.20 ;
const float MAX_DEUDA = 0.40 ;
const int MESES_YEAR = 12 ;

//Lectura y de claracion de variables
float ingreso_mensual ;
float val_inmueble ;
float enganche ;
int plazo ;
float interes ;
float compromisos ;
float monto_credito;
float meses_totales ;
float tasa_mensual ;
float cuota_mensual ;
float ratio_endeudamiento ; 
char estado_credito[20] ;
float monto_final ; 

printf("Ingrese el ingreso mensual del cliente: ");
scanf("%f", &ingreso_mensual);
printf("Ingrese el valor del inmueble: ");
scanf("%f", &val_inmueble);
printf("Ingrese el enganche inicial (en porcentaje): ");
scanf("%f", &enganche);
printf("Ingrese el plazo del credito (en years): ");
scanf("%d", &plazo);
printf("Ingrese la tasa de interes anual: ");
scanf("%f", &interes);
printf("Ingrese los compromisos financieros : ");
scanf("%f", &compromisos);
//Calculos financieros iniciales
monto_credito = val_inmueble - enganche ;
meses_totales = plazo * MESES_YEAR ;
tasa_mensual = (interes / 100) / MESES_YEAR ;

//Calculo de la cuota mensual (Farmula de amortizacion estandar)
cuota_mensual = (monto_credito * tasa_mensual) / (1 -pow(1 + tasa_mensual, -meses_totales)) ;

//Calculo del ratio de endeudamiento total
ratio_endeudamiento = (cuota_mensual + compromisos) / ingreso_mensual ;

// Aplicar descuento del 5% al monto del credito final
monto_final = monto_credito * 0.95 ;

//Evaluacion de expresiones logicas compuestas para aprobar o rechazar
if ( (ingreso_mensual >= INGRESO_MIN) && (enganche >= (val_inmueble * ENGANCHE_MIN)) && (ratio_endeudamiento <= MAX_DEUDA) )
{
    strcpy(estado_credito, "APROBADO") ;
} else {
    strcpy(estado_credito, "RECHAZADO") ; 
}


//Mostrar los resultados por pantalla
printf ("--- EVALUACION DE CREDITO HIPOTECARIO ---\n" ) ;
printf ("Estado del Credito: %s\n", estado_credito ) ;
printf ("Monto del credito solicitado: %.2f\n", monto_credito ) ;
printf ("Monto del credito con 5%% de descuento promocional: %.2f\n", monto_final ) ;
printf ("Cuota mensual estimada: %.2f\n", cuota_mensual ) ;
printf ("Ratio de endeudamiento: %.2f\n", ratio_endeudamiento ) ;
printf ("Compromisos financieros actuales: %.2f\n", compromisos ) ;

// Seccion de conclusiones
printf ("--------------------------------------------------\n") ;
printf ("                  CONCLUSIONES                    \n") ;
printf ("--------------------------------------------------\n") ;
printf ("1. La viabilidad del credito depende estrictamente de que el ratio") ;
printf ("de endeudamiento total no supere el limite maximo del 40%%.\n") ;
printf ("2. Un enganche adecuado (mayor o igual al 20%%) reduce significativamente") ;
printf ("el riesgo financiero y la cuota mensual a pagar.\n") ;
printf ("3. El cumplimiento de los ingresos minimos garantiza la capacidad") ;
printf ("de pago a largo plazo frente a otros compromisos de deuda.\n") ;

return 0;
}
