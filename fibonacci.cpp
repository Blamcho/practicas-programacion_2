// fibonacci.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Abraham Torres Zamora

#include <iostream>
#include <stdlib.h>
 
using namespace std;


int main()

{
    int a, b=0, c=1, d=1; //se crean variavles para realizar la sucesion 

    cout << "ingrese un numero: "; cin >> a; // se solicita ingresar un numero paraa que en el finalice la sucecion (a) es el numero
    cout << "1";

    for (int i=1;i<a;i++) {

        d = b + c; //aqui comienza la sucecion que va aumentando para otener (d) con el valor de (a)
        cout <<d<< " ";

        b = c; //(b) se iguala a (c) atravez de la suma dela sucesion
        c = d; //(c) se iguala a (c) atravez de la suma dela sucesion

    }
    cout << "\n";
    system("pause");
    return 0;


}

