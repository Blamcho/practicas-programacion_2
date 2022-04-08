// clase servicios.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Abraham Torres

#include <iostream>
#include<stdio.h> 
using namespace std;



class  servicios {
private:

		string nombre;
		string disponibles;
public: 
   servicios(string, string);
	void reservar();


};

servicios::servicios(string  _nombre, string _disponibles) {
	nombre = _nombre;
	disponibles = _disponibles;
}
	void servicios::reservar(){
	
	
	
	}



	int main(){


		system("PAUSE");
		return 0;
}