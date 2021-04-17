/*
 * Calculos.h
 *
 *  Created on: 17 abr. 2021
 *      Author: Piuca Ricardo 1°C
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_

#include <stdio.h>

/** \brief Realiza una suma entre los numeros ingresados
 *
 *  \param float Primer numero ingresado
 *  \param float Segundo numero ingresado
 *  \return float Devuelve el resultado de la suma de ambos numeros
 **/
float SumarNumeros(float,float);

/** \brief Realiza una resta entre los numeros ingresados
 *
 *  \param float Primer numero ingresado
 *  \param float Segundo numero ingresado
 *  \return float Devuelve el resultado de la resta de ambos numeros
 **/
float RestarNumeros(float,float);

/** \brief Realiza una division entre los numeros ingresados
 *
 *  \param float Primer numero ingresado
 *  \param float Segundo numero ingresado
 *  \return float Devuelve el resultado de la division o 0 en caso de no poder realizar la operacion
 **/
float DividirNumeros(float,float);

/** \brief Realiza una multiplicacion entre los numeros ingresados
 *
 *  \param float Primer numero ingresado
 *  \param float Segundo numero ingresado
 *  \return float Devuelve el resultado de la multiplicacion de ambos numeros
 **/
float MultiplicarNumeros(float,float);

/** \brief Castea un numero flotante a entero y saca su factorial (Redondeando hacia abajo)
 *
 *  \param float Numero a sacar el factorial
 *  \return int Devuelve el factorial del numero ingresado
 **/
int FactorialNumero(float);

#endif /* CALCULOS_H_ */
