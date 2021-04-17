/*
 * Calculos.c
 *
 *  Created on: 17 abr. 2021
 *      Author: Piuca Ricardo 1°C
 */

#include "Calculos.h"
//Suma de numeros
float SumarNumeros(float numeroA, float numeroB)
{
	float resultado;
    resultado = numeroA + numeroB;
    return resultado;
}
//Resta de numeros
float RestarNumeros(float numeroA,float numeroB)
{
	float resultado;
    resultado = numeroA - numeroB;
    return resultado;
}
//Division de numeros
float DividirNumeros(float numeroA,float numeroB)
{
    float resultado;
    if(numeroA == 0 || numeroB == 0)
    {
        resultado = 0;
    }else
    {
        resultado = numeroA / numeroB;
    }
    return resultado;
}
//Multiplicacion de numeros
float MultiplicarNumeros(float numeroA, float numeroB)
{
	float resultado;
    resultado = numeroA * numeroB;
    return resultado;
}
//Factorial del numero
int FactorialNumero(float numero)
{
    int i;
    int factorial;

    factorial = 1;

    for(i=numero;i>1;i--)
    {
        factorial = factorial * i;
    }
    return factorial;
}
