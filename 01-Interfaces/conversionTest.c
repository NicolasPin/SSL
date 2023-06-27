#include <assert.h>
#include "conversion.h"


void imprimirTablaFahr();
void imprimirTablaCel();
//Solo puedo tener un main en mi makefile
int main(){
    //agregar mas pruebas
    
    assert( AreNear(to_celsius(57.8), 14.3, 0.1)== 1 );
    assert( AreNear(to_celsius(-14), -25.55, 0.1)== 1 );

    assert(AreNear(to_fahr(10.4), 50.7, 0.1)== 1 );
    assert(AreNear(to_fahr(-14), 6.8, 0.1)== 1 ); 

    imprimirTablaFahr();
    imprimirTablaCel();
    return 0;
}