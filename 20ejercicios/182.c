#include <stdio.h>
#include <string.h>
int main() {
//DESCRIPCIÓN DE PASOS A SEGUIR:
//1. Definir las constantes simbolicas de la tienda de electronica.
//2. Leer los datos del cliente (monto anual, frecuencia, antiguedad y devoluciones).
//3. Evaluar expresiones logicas compuestas para clasificar al cliente en VIP, Regular u Ocasional.
//4. Calcular el resultado final aplicando un descuento del 5% al monto de compras.
//5. Mostrar por pantalla la categoría asignada y los valores calculados.

//Definición de constantes simbolicas
const int UMBRAL_VIP = 5000 ;
const int FREQ_MIN = 12 ;
const int DEVOLUCIONES_MAX = 5 ;
const int ANTIGUEDAD_MIN = 3;

//Lectura de datos del cliente y declaracion de variables 
float monto_compras_anual ;
int frecuencia_compra ;
int antiguedad ;
int devoluciones ;
float monto_final ;
char categoria[20] ;
printf("Ingrese el monto de compras anual del cliente: ");
scanf("%f", &monto_compras_anual);      
printf("Ingrese la frecuencia de compra del cliente: ");
scanf("%d", &frecuencia_compra);
printf("Ingrese la antiguedad del cliente (en years): ");
scanf("%d", &antiguedad);
printf("Ingrese el numero de devoluciones del cliente: ");
scanf("%d", &devoluciones);

//Evaluacion de expresiones logicas compuestas para la clasificacion
if ((monto_compras_anual >= UMBRAL_VIP) && (frecuencia_compra >= FREQ_MIN) && (antiguedad >= ANTIGUEDAD_MIN) && (devoluciones <= DEVOLUCIONES_MAX)) {
    sprintf(categoria, "VIP");
}
//Si no cumple para VIP, evaluamos criterios para la categoria Regular
else if ((monto_compras_anual >= 2000) && (frecuencia_compra >= 6) && (devoluciones <= DEVOLUCIONES_MAX)) {
    sprintf(categoria, "Regular");
// Si no cumple con los anteriores, se clasifica como Ocasional
} else {
    sprintf(categoria, "Ocasional");
}   
// Cálculo del resultado final restando un descuento del 5% (0.95)
monto_final = monto_compras_anual * 0.95 ;

// Mostrar los resultados por pantalla
printf("--- CLASIFICACION DE LA TIENDA DE ELECTRONICA ---\n");
printf("Categoria del cliente: %s\n", categoria);
printf("Monto de compras anual original: %.2f\n", monto_compras_anual);
printf("Resultado final con 5%% de descuento: %.2f\n", monto_final);

return 0;
}