#include <stdio.h>
int main (){
//--------------------------------------------
// DESCRIPCION DE PASOS A SEGUIR:
// 1. Declarar la constante simbolica PI = 3.14159.
// 2. Leer el radio y la altura del cilindro (reales).
// 3. Evaluar la expresion logica (radio > 0 AND altura > 0) para asegurar dimensiones validas.
// 4. Calcular el volumen con la formula: volumen = PI * radio * radio * altura.
// 5. Calcular el cuadrado del resultado principal: volumen_cuadrado = volumen * volumen.
// 6. Mostrar por pantalla el volumen calculado.
// 7. Mostrar un resumen detallado con los datos ingresados al final.
//--------------------------------------------

// Constante simbolica
const float PI = 3.14159 ;

//Lectura y declaracion de variables
float radio ;
float altura ;
float volumen ;
float volumen_cuadrado ;
int es_valido ;
printf("Ingrese el radio del cilindro: ") ;
scanf("%f", &radio) ;
printf("Ingrese la altura del cilindro: ") ;
scanf("%f", &altura) ;

// Evaluacion logica requerida (ambos deben ser mayores a cero)
es_valido = (radio > 0 && altura > 0) ;
if (es_valido) {
    volumen = PI * radio * radio * altura ;
volumen_cuadrado = volumen * volumen ;
printf("El volumen del cilindro es: %.2f\n", volumen) ;
printf("El cuadrado del volumen es: %.2f\n", volumen_cuadrado) ;
} else {
volumen = 0 ;
volumen_cuadrado = 0 ;
printf("Error: El radio y la altura deben ser mayores a cero.\n") ;
}

//Resumen de los datos ingresados al final del algoritmo
printf("--------------------------------------------------\n") ;
printf("                RESUMEN DE DATOS                  \n") ;
printf("--------------------------------------------------\n") ;
printf("Radio ingresado: %.2f\n", radio) ;
printf("Altura ingresada: %.2f\n", altura) ;
printf("Constante PI: %.5f\n", PI) ;
printf("Volumen calculado: %.2f\n", volumen) ;
printf("Volumen elevado al cuadrado: %.2f\n", volumen_cuadrado) ;
printf("--------------------------------------------------\n") ;

return 0 ;
}