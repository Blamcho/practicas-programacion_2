// Historia  proyecto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Abraham Torres 
// en memoria de pelu :(

#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <conio.h>



using namespace std;

struct reseta {
	char ingredientes[20];
	int cantidad;

}

reseta1 = { "hongo estelar",20 },
reseta2 = { "ballas luminosas" ,15 }
;

bool respuesta;
bool reiniciar = true;

class Barita {

private:

	string poder;
	int dano;

public:
	Barita(string, int);
	void eficiecia();
	void alcance();
	void rareza();




};

Barita::Barita(string _poder, int _dano) {

	poder = _poder;
	dano = _dano;
}

void Barita::eficiecia() {

	cout << "la Barita de" << poder << "es bastante poderosa" << endl;
}

void Barita::alcance() {

	cout << "la Barita" << dano << "es muy volatil" << endl;
}

void Barita::rareza() {

	cout << "has encontrado" << poder << "es una barita unica su pprtador puede dar y quitrar vida a voluntad" << endl;
}


int main()
{



	cout << "esta es la histri de un gran guia de 4 patas " << endl;

	cout << "Elija 1 para interactuar con la historia" << endl;
	while (reiniciar)
	{
		if (respuesta == 1)
		{

			cout << "comenzar historia" << endl;//interaccion 1
			cin >> respuesta;

			if (respuesta == 1) //interaccion 2
			{
				cout << "depiertas estaas confundido no saabes que paasa solo hay neblina y un silecio silencio cepulcral " << endl;
				cout << "de la neblina  aparece un gato gris con rallas negras  y su pecho balco  sus ojos parecen  pequnas galaxias " << endl;
				cout << "decides seguir al gato   ya que parece ser la unica forma de vida en este epacio obscuro" << endl << endl;
				cin >> respuesta;
			}
			if (respuesta == 1) // interaccion 3
			{

				cout << "El gato es muy carinoso te sigue mietas caminas por este basio  desidees llamarlo pelusa" << endl;
				cout << "pelusa y tu llegan a una cueva muy obscura en la cueva encuentran una bruja" << endl;
				cout << "peleaeaste con la bruja" << endl << endl;
				cin >> respuesta;
			}


			if (respuesta == 1) //interacion 4
			{
				cout << "peleaste contra la bruja y perdiste por tus pocas habilidades " << endl;
				cout << "la bruja te atropella con su escoba y se va pero.... " << endl << endl;
				cin >> respuesta;

			}
			if (respuesta == 1)//interaccion 5
			{
				cout << "la bruja te maldijo haora escuchas una voz malvada en tu cabeza que te confude y te molelesta" << endl;
				cout << "pero parece que pelu econtro una barita magica dentro de la cueva y te la entrega" << endl;
				cout << "parece que pelu entiende la situacion de tu maldicion y se acorruca junto a ti carinosamente" << endl;
				cout << "sigues tu camino" << endl << endl;
				cin >> respuesta;
			}

			if (respuesta = 1) { //interaccion 6

				cout << "llegare a una aldea  pero en esta aldea la fruja ha enganado a los aldeanos diendoles que plneas lastimarlos" << endl;
				cout << "los aldeanos te maltratan y la voz malbada de tu cabesa te dice que los lastimes con la varita magica" << endl;
				cout << "pero  pelu se fruta en ti para tranquilizarte " << endl;
				cout << "al seguir caminando por la aldeaa encuentran una otra Barita diferente " << endl << endl;
			}





			cout << "ahora tienes dos baritas con diferentes poderes" << endl << endl;


			Barita p1 = Barita("Fuego", 20);
			Barita p2 = Barita("Agua", 20);


			p1.eficiecia();
			p2.alcance();

			cout << "" << endl << endl;

			if (respuesta = 1) { //interaccion 7


				cout << "sigues tu camino junto a pelu" << endl;
				cout << "a cadalugar al que llegas tasdas las perssonas se te maltratan y te rechasan por la voz en tu cabesa " << endl;
				cout << "no puede hacer amogos ni establecerte en ningun lado " << endl;
				cout << "parecer que apzar de ser solo un gato parece que pelu es el unico que te entiende" << endl;
				cin >> respuesta;
			}

			if (respuesta = 1) { //interaccion 8

				cout << "al pasar los dias estas cada vez peor la voz se escucha mas fuerte y sientes que estas perdiendo el contrlo" << endl;
				cout << "tu y pelu  llegan a otro pueblo en este pueblo has encontrado otra barita" << endl << endl;
				cin >> respuesta;

				Barita p3 = Barita("Vida", 20);
				p3.rareza();

				cout << "" << endl << endl;
			}
			if (respuesta = 1) { //intraccion 9
				cout << "en este pueblo tambien encuentras  a un alquimista que dicer poder ayudarte con tu maldicion" << endl;
			}
			if (respuesta = 1) //interaccion 10
			{

				cout << "el alquimista te dice  que para dejar de eschar esaa voz en tu cabeza demes vemer  vever un elixir especial " << endl;
				cout << "pero tu deves ir en busqqueda de los ingredientes los cuales son:" << endl << endl;

			}
			// interraccion 11
			cout << "ingrediente1: " << reseta1.ingredientes << endl;
			cout << "cantidad1:" << reseta1.cantidad << endl;

			cout << "ingrediente2: " << reseta2.ingredientes << endl;
			cout << "cantidad2:" << reseta2.cantidad << endl;

			cout << "" << endl << endl;

			if (respuesta == 1) //interaccion 12
			{

				cout << "el lugar donde encontraras esto ingredientes es en el bosque que de las tinieblas " << endl;
				cout << "tu y pelu se dirijen al bosque" << endl;
				cout << "al llegar al boque pelu y tu se encuentran con un clan de duendes" << endl;
				cout << "los duendes solo te daran los ingredientes a cambio de las baritas" << endl;
				cout << "o amenos de que los vensas en un duelo de magia" << endl;

			}
			if (respuesta == 0) // interaciones 13
			{

				cout << "el lugar donde encontraras esto ingredientes es en el bosque que de las tinieblas " << endl;
				cout << "tu y pelu se dirijen al bosque" << endl;
				cout << "al llegar al boque pelu y tu se encuentran con un clan de duendes" << endl;
				cout << "los duendes solo te daran los ingredientes a cambio de las baritas" << endl;
				cout << "o amenos de que los vensas en un dulwlo de magia" << endl;

			}

			cout << "preciona 1 para entregar las baritas o 0 para el duelo de magia " << endl;
			cin >> respuesta;


			if (respuesta == 1) //interaccio 14
			{
				cout << "estas a punto de entregar las baritas a los duendes pero " << endl;
				cout << "aparece la brja y dice que es una trampa que el alquimista te engaño no exixte cura para tu maldicon" << endl;
				cout << "la voz de tu caveza te hace perder el contro y " << endl;
				cout << "asesinas a todos los duendes con el poder de las baritas  " << endl;
				cout << "y tamben logras asesinar ala bruja" << endl;
				cin >> respuesta;

			}

			if (respuesta == 0) //interaccio 15
			{
				cout << "estas a punto de empezar un duelo" << endl;
				cout << "aparece la brja y dice que es una trampa que el alquimista te engaño no exixte cura para tu maldicon" << endl;
				cout << "la voz de tu caveza te hace perder el contro y " << endl;
				cout << "asesinas a todos los duendes con el poder de las baritas  " << endl;
				cout << "y tamben logras asesinar ala bruja" << endl;
				cin >> respuesta;

			}

			if (respuesta == 1) //interaccion 16
			{
				cout << "has  logrado asesinar a la bruja " << endl;
				cout << "las bariatas no caeran en sus manos malvadas" << endl << endl;
				cin >> respuesta;

			}

			if (respuesta == 1) //interaccion 17
			{
				cout << "enntre todo el caus que cauusaste pelu a huido" << endl;
				cout << "te has quedado solo" << endl;
				cin >> respuesta;

			}
			if (respuesta == 1)// interaccion 18
			{
				cout << "a pasado en tiempo  ya no has visto a pelu" << endl;
				cout << "la voz de tu cabeza a tomado casi por completo el contol de ti" << endl;
				cin >> respuesta;
			}

			if (respuesta == 1) //interaccion 19
			{
				cout << "has cometido  varias atrocidades desdde que pelu se fue " << endl;
				cout << "pero aun queda un poco de humanidad en ti " << endl;
				cout << "queres redimirte y la voz de tu cabeza te da unna obccion " << endl;
				cin >> respuesta;
			}

			if (respuesta == 1) //interaccion 20
			{
				cout << "decides quitarte la vida para redimirte " << endl;
				cout << "decides haaorcarte en el bosque" << endl;
				cin >> respuesta;
			}

			if (respuesta == 1) //interaccion 20

			{
				cout << "realizas tu cometido" << endl;
				cout << " estas apunto de perder la conciecia" << endl;
				cin >> respuesta;
			}

			if (respuesta == 1) //interaccion 21

			{
				cout << "pero pelu aparece de la nada" << endl;
				cout << " pelu te mira fijamete  " << endl;
				cout << "la cuerda se rompe magicamente " << endl;
				cin >> respuesta;
			}

			if (respuesta == 1) //interaccion 22

			{
				cout << "pelu se aserca a ti" << endl;
				cout << " y siente una sensacion  calma y paz" << endl;
				cout << "es como si pelu fuera un guia" << endl;
				cin >> respuesta;
			}

			if (respuesta == 1) //interaccion 23

			{
				cout << "estando junto a pelu puede controlar a la voz de tu cabeza " << endl;
				cout << " tu y pelu con el poder de las baritass " << endl;
				cout << "haran del mundo un lugar mejor " << endl;
				cin >> respuesta;
			}

			if (respuesta == 1) //interaccion 24

			{
				cout << "gracias po jugar " << endl;

			}
		}
	}
	    else (respuesta == 0);
	   {

	    cout << "porfavor inicia la historia " << endl;
		cin >> respuesta;
       }

	system("pause");
	return 0;
}


