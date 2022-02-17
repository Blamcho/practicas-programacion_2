//area de un rombo 
// Abraham Torres 

#include <iostream>
#include <stdio.h>

using namespace std;

int main () {
	// se crean variables para almacenar los tatos de el diametro mayor y el diametro menor
	int dmayor,  dmenor,  area;
	// en usuario ingresa el los datos
	cout << "diametro mayor = "; cin>>dmayor;
	cout << "diametro menor = "; cin>>dmenor;
	
	// el programa calcula  el area  diametro mayor por diametro mennor  emtre dos
	area= (dmayor*dmenor)/2;
	// se muestra el resultado
	cout << "area =" <<area<<endl;
	
	system ("PAUSE");
	
	return 0; 
	
	
	
}
