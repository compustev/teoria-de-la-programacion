#include <stdio.h>
int main(){
//Lectura de datos y declaracion de varibles
const int A = 100 ;
float cuenta ;
float propina ; 
float monto_propina ;
float total_pagar ;
int parte_entera ;
printf("Ingrese el monto de la cuenta: ");
scanf("%f", &cuenta);
printf("Ingrese el porcentaje de propina (0-30): ");
scanf("%f", &propina);

//Calculos
monto_propina = cuenta * propina / A ;
total_pagar = cuenta + monto_propina ;
//Evaluación para decidir qué mostrar
if (propina >= 0 && propina <= 30) {
    printf("--- DESGLOSE ---\n");
    printf("Cuenta original: %.2f\n", cuenta);
    printf("Porcentaje: %.2f%%\n", propina);
    printf("Monto de la propina: %.2f\n", monto_propina);
    printf("Total a pagar: %.2f\n", total_pagar);
    //Parte de par o impar
    if (parte_entera % 2 == 0) {
        parte_entera = total_pagar;
        printf("El total entero es PAR\n");
    } else {
        printf("El total entero es IMPAR\n");
    }
} else {
    printf("Error: La propina debe estar entre 0 y 30\n");
}
return 0;
}