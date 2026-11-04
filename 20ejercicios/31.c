#include <stdio.h>
#include <math.h>
int main(){
    const int EXPONENTE = 3;
    float arista;
    float volumen;
    printf("Calculo del volumen de un cubo.\n");
    printf("Por favor ingrese el valor de la arista " ); 
    scanf("%f", &arista);

   if(arista>0){
   volumen = pow(arista, EXPONENTE);
   printf("El volumen es: %.2f \n", volumen); 
   printf("Es positivo.\n");
   } else{
   printf("Es negativo.\n");
   }
    
    return 0;

}