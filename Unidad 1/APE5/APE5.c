#include <stdio.h>
#include <math.h>   
int main() {

//Leer datos
    float c1;
    float c2;
    float nl;
//Encerar 
    float nc;
    float c3;
    float nf;
//ingresar datos
    printf("Ingrese el valor de certamen 1: \n");
    scanf("%f", &c1);       
    printf("Ingrese el valor de c2: \n");
    scanf("%f", &c2);
    printf("Ingrese el valor de la nota de laboratorio: \n");
    scanf("%f", &nl);   
//proceso
c3 = ( 3 * (60 - nl * 0.3) / 0.7 ) - c1 - c2;
nc = (c1 + c2 + c3) / 3;
nf = (nc * 0.7) + (nl * 0.3);
//Encerar 
printf("La nota minima necesaria en C3 para que el estudiante apruebe la asignatura es: %.2f\n", c3);
printf("La nota final es: %.2f\n", nf);
printf("Si el resultado es negativo, significa que ya aprueba con las notas actuales\n");

    
    return 0;
}