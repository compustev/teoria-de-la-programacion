#include <stdio.h>
#include <math.h>
int main() {

/* Se usan constantes simbolicas para las horas normales limite y el factor extra
para evitar numeros magicos y facilitar modificaciones futuras en la politica salarial. */
// Constantes simbolicas
const int HORAS_NORMALES = 40 ;
const float FACTOR_EXTRA = 1.5 ;
// Lectura de variables
float horas ;
float pago_hora ;
float salario ;
float valor_maximo ;
printf("Ingrese el numero de horas trabajadas: ") ;
scanf("%f", &horas) ;   
printf("Ingrese el pago por hora: ") ;
scanf("%f", &pago_hora) ;

// Determinacion inicial del valor maximo entre las entradas
valor_maximo = horas ;
if (pago_hora > valor_maximo) {
    valor_maximo = pago_hora ;
}
// Evaluacion relacional y calculo del salario
if (horas > HORAS_NORMALES) {
    salario = (HORAS_NORMALES * pago_hora) + ((horas - HORAS_NORMALES) * pago_hora * FACTOR_EXTRA) ;
} else {
    salario = horas * pago_hora ;
}
// Actualizacion del valor maximo considerando el salario calculado
if (salario > valor_maximo) {
    valor_maximo = salario ;
}
// Muestra de resultados por pantalla
printf("El salario total es: %.2f\n", salario) ;
printf("El valor maximo de las variables utilizadas es: %.2f\n", valor_maximo) ;

    return 0;

}