#include <stdio.h>
#include "conversion.h"

#define UPPERc  100
#define LOWERc  -50
#define STEPc   10

#define UPPERf  300
#define LOWERf  0
#define STEPf   20


void imprimirTablaFahr(){
    printf("Tabla de Fahrenheit a Celsius\n");
    for (double fahr = LOWERf; fahr <= UPPERf; fahr += STEPf)
        printf("%3.0f\t%6.1f\n", fahr, to_celsius(fahr));
}

void imprimirTablaCel(){
    printf("Tabla de Celsius a Fahrenheit\n");
    for (double cel = LOWERc; cel <= UPPERc; cel += STEPc)
        printf("%3.0f\t%6.1f\n", cel, to_fahr(cel));
}