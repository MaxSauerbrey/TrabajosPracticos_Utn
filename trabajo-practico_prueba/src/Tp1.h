/*
 * Tp1.h
 *
 *  Created on: Apr 17, 2021
 *      Author: maxdev
 */

#ifndef TP1_H_
#define TP1_H_

#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define LEN_BUFFER 1000

/**
 * @fn int ValidarUnNumeroEntero(char[])
 * @brief Valida si la cadena de caracteres ingresada es un numero entero.
 *
 * @param buffer Cadena de caracteres a ser validada.
 * @return retorno, (1) Es un numero entero/ (0) No es un numero entero.
 */
int ValidarUnNumeroEntero(char buffer[]);

/**
 * @fn int ValidarUnNumeroFlotante(char[])
 * @brief Valida si la cadena de caracteres ingresada es un numero flotante.
 *
 * @param buffer Cadena de caracteres a ser validada.
 * @return retorno, (1) Es un numero flotante / (0) No es un numero flotante.
 */
int ValidarUnNumeroFlotante(char buffer[]);

/**
 * @fn int Pedir_Entero(char[], char[])
 * @brief Solicita un numero entero.
 *
 * @param msj, mensaje ha ser mostrado al usuario.
 * @param msjError, mensaje ha ser mostrado al usuario si existe error.
 * @return retorno, un numero entero.
 */
int Pedir_Entero (char msj[], char msjError[]);

/**
 * @fn int Pedir_Entero_Rango(char[], char[], int, int, char[])
 * @brief Solicita un numero entero entre dos rangos.
 *
 * @param msj, mensaje ha ser mostrado al usuario.
 * @param msjError, mensaje ha ser mostrado al usuario si existe error.
 * @param min, valor minimo establecido.
 * @param max, valor maximo establecido.
 * @param errorRango mensaje ha ser mostrado cuando se ingresa un numero por fuera del rango establecido.
 * @return numero, un numero entero.
 */
int Pedir_Entero_Rango (char msj[], char msjError[], int min, int max, char errorRango[]);

/**
 * @fn float Pedir_Float(char[], char[])
 * @brief Solicita un numero float.
 *
 * @param msj, mensaje ha ser mostrado al usuario.
 * @param msjError, mensaje ha ser mostrado al usuario si existe error.
 * @return retorno, un numero float.
 */
float Pedir_Float (char msj[], char msjError[]);

/**
 * @fn float SumarDosNumeros(float, float)
 * @brief Suma dos numeros solicitados.
 *
 * @param numero1, es el primer numero para realizar la operacion.
 * @param numero2, es el segundo numero para realizar la operacion.
 * @return resultado, resultado de la operacion (suma).
 */
float SumarDosNumeros (float numero1, float numero2);

/**
 * @fn float RestarDosNumeros(float, float)
 * @brief Resta dos numeros solicitados.
 *
 * @param numero1, es el primer numero para realizar la operacion.
 * @param numero2, es el segundo numero para realizar la operacion.
 * @return resultado, resultado de la operacion(resta).
 */
float RestarDosNumeros (float numero1, float numero2);

/**
 * @fn float MultiplicarDosNumeros(float, float)
 * @brief Multiplica dos numeros solicitados.
 *
 * @param numero1, es el primer numero para realizar la operacion.
 * @param numero2, es el segundo numero para realizar la operacion.
 * @return resultado, resultado de la operacion (Multiplicacion).
 */
float MultiplicarDosNumeros (float numero1, float numero2);

/**
 * @fn float DividirDosNumeros(float, float)
 * @brief Divide dos numeros solicitados.
 *
 * @param numero1, es el primer numero para realizar la operacion.
 * @param numero2, es el segundo numero para realizar la operacion.
 * @return resultado, resultado de la operacion (Division).
 */
float DividirDosNumeros (float numero1, float numero2);

/**
 * @fn int DefineFlotante(float)
 * @brief Valida si el numero ingresado es un numero flotante.
 *
 * @param numero1 es el numero a ser validado.
 * @return resultado, (1)Es un numero flotante / (0) No es un numero flotante.
 */
int DefineFlotante(float numero1);

/**
 * @fn long long int FactorearNumero(float)
 * @brief Factorea un numero solicitado.
 *
 * @param numeroIngresado, es el numero para realizar la operacion.
 * @return factorial, resultado de la operacion (Factorial).
 */
long long int FactorearNumero (float numeroIngresado);

/**
 * @fn void MenuCalcular(float, float, int, int, char[], char)
 * @brief Muestra cada opcion del menu calcular segun la operacion y los valores ingresados.
 *
 * @param variable1, es el primer numero ingresado.
 * @param variable2, es el segundo numero ingresado.
 * @param flag1, bandera de ingreso de la primera opcion.
 * @param flag2 bandera de ingreso de la segunda opcion.
 * @param msj, es el mensaje que se muestra en el menu calcular segun la operacion.
 * @param operando, es el operando que se muestra en el menu calcular para cada operacion.
 */
void MenuCalcular(float variable1, float variable2, int flag1,int flag2, char msj[], char operando);

/**
 * @fn void MuestraMenu(int, int, float, float)
 * @brief Muestra las opciones del menu.
 *
 * @param flag1, bandera de ingreso de la primera opcion.
 * @param flag2, bandera de ingreso de la segunda opcion.
 * @param var1, es el primer numero ingresado.
 * @param var2, es el segundo numero ingresado.
 */
void MuestraMenu (int flag1, int flag2, float var1,float var2);

/**
 * @fn void MostrarFactorial(float, float, long long int, long long int)
 * @brief Muestra el resultado de la operacion factorial para los dos numeros ingresados.
 *
 * @param flag1, bandera de ingreso de la primera opcion.
 * @param flag2, bandera de ingreso de la segunda opcion.
 * @param resultado1, es el resultado del factorial del primer numero ingresado.
 * @param resultado2, es el resultado del factorial del segundo numero ingresado.
 */
void MostrarFactorial (float var1,float var2, long long int resultado1, long long int resultado2);

/**
 * @fn int Valida_AccesoInforme(int, int, int, char[], char[], char[])
 * @brief Valida el acceso a los informes de resultados de las operaciones.
 *
 * @param flag1, bandera de ingreso de la primera opcion.
 * @param flag2, bandera de ingreso de la segunda opcion.
 * @param flag3, bandera de ingreso de la tercera opcion.
 * @param msjError1, mensaje de error por validacion de la primera opcion.
 * @param msjError2, mensaje de error por validacion de la segunda opcion.
 * @param msjError3, mensaje de error por validacion de la tercera opcion.
 * @return resultado, (0) Error / (1) Valido.
 */
int Valida_AccesoInforme(int flag1,int flag2,int flag3, char msjError1[],char msjError2[],char msjError3[]);

/**
 * @fn int ValidaFlagsCalculos(int, int, char[], char[])
 * @brief
 *
 * @param flagVar1, bandera de ingreso de la primera opcion.
 * @param flagVar2, bandera de ingreso de la segunda opcion.
 * @param msjError1, mensaje de error por validacion de la primera opcion.
 * @param msjError2, mensaje de error por validacion de la segunda opcion.
 * @return resultado, (0) Error / (1) Valido.
 */
int Valida_AccesoCalculos(int flagVar1,int flagVar2,char msjError1[],char msjError2[]);

/**
 * @fn void MuestraInformesResultados(float, float, float, float, float, float, long long int, long long int)
 * @brief Muestra los resultados de todas las operaciones.
 *
 * @param var1, es el primer numero ingresado.
 * @param var2, es el segundo numero ingresado.
 * @param resultSuma, es el resultado de la operacion suma.
 * @param resultResta, es el resultado de la operacion resta.
 * @param resultDivision, es el resultado de la operacion division.
 * @param resultMultiplicacion, es el resultado de la operacion division.
 * @param resultFactorial1, es el resultado de la operacion factorial del primer numero ingresado.
 * @param resultFactorial2, es el resultado de la operacion factorial del segundo numero ingresado.
 */
void MuestraInformesResultados (float var1,float var2, float resultSuma, float resultResta,float resultDivision, float resultMultiplicacion, long long int resultFactorial1, long long int resultFactorial2);

#endif /* TP1_H_ */
