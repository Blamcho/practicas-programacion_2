// Par e impar.cpp
// Abraham Torres

#include <iostream>
using namespace std;

int main()
{

	int Numero;
	//el usuario ingresa un numero
	cout << "ingrese un numero: ";
	cin >> Numero;

	int Resultado = Numero & 1;
       // con este condicional if  el  programa utilizara el numero que el usuario ingreso y comprobara si es par e impar 
	if (Resultado)
	{
		cout << "El numero ingresado " << Numero << " es Impar";
	}

	else
	{
		cout << "El numero ingresado " << Numero << " es Par";
	}
	
	return 0;

}

