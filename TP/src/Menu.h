/*
 * Menu.h
 *
 *  Created on: 17 abr. 2021
 *      Author: monom
 */

#ifndef MENU_H_
#define MENU_H_

#include "Calculos.h"
typedef struct
{
	float operandoA;
	float operandoB;
	float resultadoSuma;
	float resultadoResta;
    float resultadoDivision;
    float resultadoMultiplicacion;
    int factorialA;
    int factorialB;
    int calculoRealizado;
}eNumeros;
/** \brief Muestra el menu al usuario para que elija que opcion ejecutar
 *
 *  \param eNumeros muestra los numeros cargados
 *  \return int Devuelve el numero de la opcion elejida
 **/
int MostrarMenu(eNumeros);

/** \brief Permite ingresar un operando para futuras operaciones matematicas
 *
 *  \param char[] mensaje para pedir el tipo de operando
 *  \param char[] mensaje para notificar el exito del ingreso
 *  \return float Devuelve el numero ingresado como operando
 **/
float IngresarOperando(char[], char[]);

/** \brief Llama a las funciones necesarias para realizar los calculos matematicos
 *
 *  \param eNumeros estructura sobre la cual se trabajara
 *  \return eNumeros Devuelve los resultados a la variable
 **/
eNumeros CalcularOperaciones(eNumeros);

/** \brief Muestra los resultados matematicos en pantalla
 *
 *  \param eNumeros contiene los datos a mostrar en pantalla
 **/
void MostrarResultados(eNumeros);

/** \brief Ejecuta la opcion elejida por el usuario
 *
 *  \param eNumeros contiene los numeros enteros con los cuales se trabajara
 *  \param int es el numero de la opcion elejida por el usuario
 *  \return eNumeros guarda los datos ingresados
 **/
eNumeros EjecutarOpcion(eNumeros, int);

#endif /* MENU_H_ */
