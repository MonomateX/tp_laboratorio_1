/*
 * Menu.c
 *
 *  Created on: 17 abr. 2021
 *      Author: monom
 */

#include "Menu.h"

int MostrarMenu(eNumeros numero)
{
    int opcion;
    printf("\n1. Ingresar 1er operando (A = %.2f)\n", numero.operandoA);
    printf("2. Ingresar 2do operando (B = %.2f)\n", numero.operandoB);
    printf("3. Calcular todas las operaciones\n4. Informar resultados\n5. Salir\nElija una opcion: ");
    scanf("%d", &opcion);
    return opcion;
}

float IngresarOperando(char mensaje[], char realizado[])
{
	float numeroIngresado;
    printf("%s", mensaje);
    scanf("%f", &numeroIngresado);
    printf("\n%s\n", realizado);
    return numeroIngresado;
}

eNumeros CalcularOperaciones(eNumeros calculo)
{
    calculo.resultadoSuma = SumarNumeros(calculo.operandoA, calculo.operandoB);
    calculo.resultadoResta = RestarNumeros(calculo.operandoA, calculo.operandoB);
    calculo.resultadoDivision = DividirNumeros(calculo.operandoA, calculo.operandoB);
    calculo.resultadoMultiplicacion = MultiplicarNumeros(calculo.operandoA, calculo.operandoB);
    if(calculo.operandoA >= 1 && calculo.operandoA <= 12)
    {
        calculo.factorialA = FactorialNumero(calculo.operandoA);
    }
    if(calculo.operandoB >= 1 && calculo.operandoB <= 12)
    {
        calculo.factorialB = FactorialNumero(calculo.operandoB);
    }
    calculo.calculoRealizado = 1;
    printf("\nOPERACIONES CALCULADAS\n");
    return calculo;
}

void MostrarResultados(eNumeros calculo)
{
    printf("\nMOSTRANDO RESULTADOS..\n");
    if(calculo.operandoA != 0 && calculo.operandoB != 0 && calculo.calculoRealizado == 1)
    {
        printf("\nEl resultado de A+B es: %.2f", calculo.resultadoSuma);
        printf("\nEl resultado de A-B es: %.2f", calculo.resultadoResta);
        if(calculo.resultadoDivision != 0)
        {
            printf("\nEl resultado de A/B es: %.2f", calculo.resultadoDivision);
        }else
        {
            printf("\nNo es posible dividir por cero");
        }
        printf("\nEl resultado de A*B es: %.2f", calculo.resultadoMultiplicacion);
        if(calculo.operandoA >= 1 && calculo.operandoA < 12)
        {
            printf("\nEl factorial de A es: %d", calculo.factorialA);
        }else
        {
            printf("\nEl factorial de A contiene negativo o se sale de rango!");
        }
        if(calculo.operandoB >= 1 && calculo.operandoB < 12)
        {
            printf("\nEl factorial de B es: %d", calculo.factorialB);
        }else
        {
            printf("\nEl factorial de B contiene negativo o se sale de rango!\n");
        }
    }else
    {
        printf("\nERROR! FALTO INGRESAR UN OPERANDO O NO CALCULO LAS OPERACIONES\n");
    }
}

eNumeros EjecutarOpcion(eNumeros dato, int opcion)
{
    switch(opcion)
        {
            case 1:
                dato.operandoA=IngresarOperando("\nIngrese el primer operando: ","\nPRIMER OPERANDO INGRESADO!");
                break;
            case 2:
                dato.operandoB=IngresarOperando("\nIngrese el segundo operando: ","\nSEGUNDO OPERANDO INGRESADO!");
                break;
            case 3:
                dato=CalcularOperaciones(dato);
                break;
            case 4:
                MostrarResultados(dato);
                dato.calculoRealizado = 0;
                break;
            case 5:
                printf("\nSaliendo..");
                break;
            default:
                printf("\nOPCION NO VALIDA!\n");
                break;
        }
    return dato;
}
