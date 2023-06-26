#include "conversion.h"

//implementacion de funciones

double to_celsius (double f){
    return  (f -32)*5.0/9.0;
}

double to_fahr (double c){
    return  (c *9.0/5.0) + 32;
}

int AreNear(double value, double secondValue, double tolerance)
{
    return value - tolerance <= secondValue && value + tolerance >= secondValue;
}  