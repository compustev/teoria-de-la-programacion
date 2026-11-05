#include <stdio.h>

int main() {
    // Declaraacion de variables
    const int CONVERSION_GB_MB = 1024;
    int cant_doc ;
    int cant_img;
    int cant_vid;
    int cant_prgm;
    float tam_doc;
    float tam_img;
    float tam_vid;
    float tam_prgm;
    float gb_disco;
    float espacio_doc;
    float espacio_img;
    float espacio_prgm;
    float espacio_vid;
    float espacio_total_gb;
    float espacio_total_mb;
    float porcentaje_almacenamiento; 

printf("por favor ingrese la cantidad de documentos : ");
scanf ("%d" , &cant_doc);

printf("por favor ingrese el tamano del documento en MB : ");
scanf("%f" , &tam_doc);

printf("por favor ingrese la cantidad de imagenes : ");
scanf("%d" , &cant_img);

printf("por favor ingrese el tamano de imagenes en MB : ");
scanf("%f" , &tam_img);

printf("por favor ingrese la cantidad de videos : " );
scanf("%d" , &cant_vid);

printf("por favor ingrese el tamano del video en MB : ");
scanf("%f" , &tam_vid);

printf("por favor ingrese la cantidad del programa : ");
scanf("%d" , &cant_prgm);

printf("por favor ingrese el tamano del programa en MB : ");
scanf("%f" , &tam_prgm);

printf("por favor ingrese la capacidad del disco en GB : ");
scanf("%f" , &gb_disco);

// proceso

    espacio_doc = cant_doc * tam_doc;
    espacio_img = cant_img * tam_img;
    espacio_vid = cant_vid * tam_vid;
    espacio_prgm = cant_prgm * tam_prgm;
    espacio_total_mb = espacio_doc + espacio_img + espacio_vid + espacio_prgm;
    espacio_total_gb = espacio_total_mb / CONVERSION_GB_MB;
    porcentaje_almacenamiento = (espacio_total_gb / gb_disco) * 100;

    // Lectura de resultados
    
    printf("1 Espacio ocupado por documento %2f MB\n", espacio_doc );

    printf("2 Espacio ocupado por imagenes %2f MB\n", espacio_img );

    printf("3 Espacio ocupado por videos %2f MB\n" , espacio_vid );

    printf("4 Espacio ocupado por programas %2f MB\n" , espacio_prgm);

    printf("5 Espacio total utilizado %2f MB\n" , espacio_total_mb );

    printf("6 Espacio total en GB %2f GM\n" , espacio_total_gb );

    printf("7 Porcentaje de almacenamiento utilizado %2f %%\n "  , porcentaje_almacenamiento );

    return 0 ;
}    