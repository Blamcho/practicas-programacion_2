// factorial.cpp 
// Abraham Torres

#include <iostream>
#include "conio.h"

using namespace std;

int main()
{
// se utilizan dos variables  una para ingresar el numero y otra para la factorial
	int Numero;
	int Factorial = 1;

	cout << "ingresa un numero: ";
	cin >> Numero;
	 // con este ciclo for se realiza el proceso para calcular la factoria de numero ingresado con el numero que ingreso el usuario 
	for (int i = 1; i <= Numero; i++)
	{
// despues de que se calcula la factorial se imprime
		Factorial = Factorial * i;
		cout << " El Factorial de numero ingresad es: [" << Factorial << "]";

	}
	
	return 0;

}
