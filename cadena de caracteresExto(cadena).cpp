// cadena de caracteresExto(cadena).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Abraham Torres

#include <iostream>
#include <string>

using namespace std;

int main()
{


    string A(" Frase de Prueba ");
    string B;

    cout << "Frase de Ejemplo: 'Frase de Prueba' " << endl;
    cout << "ingrese la Palabra que desea buscar: ";
    cin >> B;

    size_t found = A.find(B);

    if (found != string::npos)
    {

        cout << "Se encontro en el lugar: " << found << endl;

    }

    return 0;

}