// qperadores.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Abraham Torres 


#include <iostream>
#include <cmath>
#include <stdio.h>

using  namespace std;

int main()
{
	// se inicializan variables para cada dato
    double a, b, x, z, d;
   // el usuario se le solicitan dos datos
   
    cout << " ingrese un numero :"<< endl;
    cin >> a;

    cout << " ingrese un numero :"<< endl;
    cin >> b;
    // se utiliza la fucion pow para calcular la potencias de los numeros
    x=pow(a, b);
    cout << "el numero :" << a << "es la potencia :" << b << "es :" << x << endl ;

    z=pow(b, a);
    cout << "el numero:" << b <<  "es la potencia :" << a << "es :" << z << endl ;

    
     // se realiza  la operacion multiplicando x * z* a/b
    d = (x * z* a/ b);
     
// se imprime el resultado
    cout << "el resultado es : " << d;
    return 0;
}

