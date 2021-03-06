/*
 * Tp1.c
 *
 *  Created on: Apr 17, 2021
 *      Author: maxdev
 */

#include "Tp1.h"

int ValidarUnNumeroEntero(char buffer[])
{
int retorno=1;
int i;
int largo;

largo=strlen(buffer);

if(largo >0)// Pregunto si la cadena ingresada no este vacia
{
for(i=0; i<largo; i++)//Recorro el buffer desde ppio a fin
{
if(isdigit(buffer[i])==0)
{
if(i==0)
{
if(buffer[0] != '-')
{
retorno=0;
break;
}
}
else
{
retorno=0; //Si i!=0 y buffer[i] == '-' rtn = 0
break;
}
}
}
}
else
{
retorno=0; //Si lo que ingresa el usuario es una cadena vacia (largo = 0)
}

return retorno;
}

int ValidarUnNumeroFlotante(char buffer[])
{
int retorno=1;
int largo;
int i;
int contador=0;

largo= strlen(buffer);

if(largo>0)
{
for(i=0;i<largo;i++)
{
if(buffer[i]=='.' || buffer[i]==',')
{
contador++;
}
else
{
if(isdigit(buffer[i])==0)
{
if(i ==0)
{
if(buffer[0] != '-')
{
retorno=0;
break;
}
}
else
{
retorno=0; //Si no es '-' en i==0
break;
}
}
}
}

if(contador > 1)
{
retorno = 0;
}
}
else
{
retorno=0; //Si lo que ingresa el usuario es una cadena vacia (largo = 0)
}

return retorno;
}

int Pedir_Entero (char msj[], char msjError[])
{
int retorno;
char buffer[LEN_BUFFER];

printf("%s",msj);
__fpurge(stdin);
scanf("%[^\n]",buffer);

while(ValidarUnNumeroEntero(buffer)==0)
{
printf("%s",msjError);
__fpurge(stdin);
scanf("%[^\n]",buffer);
}

retorno = atoi(buffer); //Recibe una cadena, devuelve un entero.

return retorno;
}

int Pedir_Entero_Rango(char msj[], char msjError[], int min, int max, char errorRango[])
{
int numero;

numero = Pedir_Entero(msj, msjError);

while(numero<min || numero>max)
{
printf("%s (minimo => %d maximo => %d).\n",errorRango,min,max);
numero = Pedir_Entero(msj, msjError);
}

return numero;
}

float Pedir_Float (char msj[], char msjError[])
{
float retorno;
char buffer[LEN_BUFFER];

printf("%s",msj);
__fpurge(stdin);
scanf("%[^\n]",buffer);


while(ValidarUnNumeroFlotante(buffer)==0)
{
printf("%s",msjError);
__fpurge(stdin);
scanf("%[^\n]",buffer);
}

retorno = atof(buffer); //Recibe una cadena,


return retorno;
}

float SumarDosNumeros (float numero1, float numero2)
{
float resultado;

resultado = numero1+numero2;

return resultado;
}

float RestarDosNumeros (float numero1, float numero2)
{
float resultado;

resultado= numero1-numero2;

return resultado;
}

float MultiplicarDosNumeros (float numero1, float numero2)
{
float resultado;

resultado= numero1*numero2;

return resultado;

}

float DividirDosNumeros (float numero1, float numero2)
{
float resultado;

resultado =numero1/numero2;

return resultado;

}

int DefineFlotante(float numero1)
{
int resultado;
int buffer;

buffer=numero1;
buffer=(int)buffer;

if(numero1>buffer)
{
resultado=1; //Es flotante
}

else
{
if(numero1==buffer) //No es un flotante
{
resultado=0;
}
}
return resultado;
}

long long int FactorearNumero (float numeroIngresado)
{
int i;
long long int factorial=1;
int result;

result=DefineFlotante(numeroIngresado);

if(result==0)
{
if (numeroIngresado>-1 )
{
if(numeroIngresado != 0)
{
for (i = numeroIngresado; i > 1; i--)
{
factorial *= i;
}
}
else
{
if(numeroIngresado==0)
{
factorial=1;
}
}
}
else
{
if(numeroIngresado<-1)
{
factorial=-2; // Factorial Negativo.
}
}
}
else
{
if(result==1)
{
factorial = -1; //Factorial Numero Flotante.
}
else
{
if(numeroIngresado<-1)
{
factorial=-3; // Factorial Flotante Negativo.
}
}
}
return factorial;
}

void MenuCalcular(float variable1, float variable2, int flag1,int flag2, char msj[], char operando)
{
if(flag1==0 && flag2 ==0)
{
printf(" %s (A%cB).\n",msj,operando);
}
else
{
if(flag1>0 && flag2 ==0)
{
printf(" %s (%.2f)%cB.\n",msj,variable1,operando);
}
if(flag1>0 && flag2>0 )
{
printf(" %s (%.2f)%c(%.2f).\n",msj,variable1,operando,variable2);
}
}
}

void MuestraMenu (int flag1, int flag2, float var1,float var2)
{
printf("\nMenu principal.\n");
//Primera variable.
if(flag1==0)
{
printf("\n1.Ingrese el primer operando (A=x).\n");
}
else
{
printf("1.El primer operando ingresado es: (A = %.2f)\n",var1);
}

//Segunda variable.
if(flag2==0)
{
printf("2.Ingrese el segundo operando (B=y).\n");
}
else
{
printf("2.El segundo operando ingresado es: (B = %.2f)\n",var2);
}
//Calcular todas las operaciones
printf("3.Calcular todas las operaciones.\n");
MenuCalcular(var1, var2, flag1, flag2,"-Calcular la suma",'+');
MenuCalcular(var1, var2, flag1, flag2,"-Calcular la resta",'-');
MenuCalcular(var1, var2, flag1, flag2,"-Calcular la division",'/');
MenuCalcular(var1, var2, flag1, flag2,"-Calcular la multiplicacion",'*');
MenuCalcular(var1, var2, flag1, flag2,"-Calcular el Factorial",'&');
//Mostrar resultados
printf("4.Informe de resultados.\n");
printf("5.Salir.\n");
}

void MostrarFactorial (float var1,float var2, long long int resultado1, long long int resultado2)
{

if(resultado1>-1)
{
printf("El factorial de %.2f es: %lli.\n",var1,resultado1);
}
else
{
if(resultado1==-3)
{
printf("No se pudo calcular el factorial de A= %.2f, el numero ingresado debe ser un numero entero positivo.\n",var1);
}
if(resultado1==-2)
{
printf("No se pudo calcular el factorial de A = %.2f, el numero ingresado debe ser un numero entero positivo.\n",var1);
}
if(resultado1== -1)
{
printf("No se pudo calcular el factorial de A = %.2f, el numero ingresado debe ser un numero entero positivo.\n",var1);
}
}

if(resultado2>-1)
{
printf("El factorial de %.2f es: %lli.\n",var2,resultado2);
}
else
{
if(resultado2==-3)
{
printf("No se pudo calcular el factorial de B= %.2f, el numero ingresado debe ser un numero entero positivo.\n",var2);
}
if(resultado2==-2)
{
printf("No se pudo calcular el factorial de B = %.2f, el numero ingresado debe ser un numero entero positivo.\n",var2);
}
if(resultado2== -1)
{
printf("No se pudo calcular el factorial de B = %.2f, el numero ingresado debe ser un numero entero positivo.\n",var2);
}
}
}

int Valida_AccesoInforme(int flag1,int flag2,int flag3, char msjError1[],char msjError2[],char msjError3[])
{
int resultado=1;

if(flag1==0 && flag2==0)
{
printf("%s",msjError1);
resultado=0;
}
else
{
if(flag1>0 && flag2 ==0)
{
printf("%s",msjError2);
resultado=0;
}
else
{
if(flag3 ==0)
{
printf("%s",msjError3);
resultado=0;
}
}
}
return resultado;
}

int Valida_AccesoCalculos(int flagVar1,int flagVar2,char msjError1[],char msjError2[])
{
int resultado=1;

if(flagVar1==0 && flagVar2==0)
{
printf("%s",msjError1);
resultado=0;
}
else
{
if(flagVar1>0 && flagVar2 ==0)
{
printf("%s",msjError2);
resultado=0;
}
}
return resultado;
}


void MuestraInformesResultados (float var1,float var2, float resultSuma, float resultResta,float resultDivision, float resultMultiplicacion, long long int resultFactorial1, long long int resultFactorial2)
{

//Muestra Suma
printf("El resultado de (%.2f) + (%.2f) es: %.2f.\n",var1,var2,resultSuma);
//Muestra Resta
printf("El resultado de (%.2f) - (%.2f) es: %.2f.\n",var1,var2,resultResta);
//Muestra Division
if(var2!=0)
{
printf("El resultado de (%.2f) / (%.2f) es: %.2f.\n",var1,var2,resultDivision);
}
else
{
printf("La division por cero no esta definida.\n");
}
//Muestra multiplicacion
printf("El resultado de (%.2f) * (%.2f) es: %.2f.\n",var1,var2,resultMultiplicacion);
//Muestra Factorial
MostrarFactorial(var1,var2,resultFactorial1,resultFactorial2);

}

