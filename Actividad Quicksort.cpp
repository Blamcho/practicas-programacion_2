// Actividad Quicksort
// Isra Morán P. - Abraham Torres

#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

struct Libro //se inicia una estructura para tomar los datos de los libros
{

public:

    int ISBN;
    string Nombre;
    int NPaginas;
    string Autor;

};

Libro Informacion[6]; //se usa un arreglo para la imformacion de los libros
void Leer();
void Imprimir();
void quicksort(int Start, int End);
int divide(int Start, int End);
void buscar();

int main()
{

    Libro Informacion[6];
    int Busqueda;

    Leer();
    quicksort(0, 6 - 1);
    Imprimir();
    _getch();
    system("CLS");
    buscar();


    return 0;

}

void Leer() // aqui se le los datos ingresados
{

    cout << "Ingrese los datos de los libros: " << endl;
    cout << endl;
    for (int i = 0; i < 6; i++)

    {
        cout << "------Libro-----" << i + 1 << endl;

        cout << "Nombre del Libro: ";
        cin >> Informacion[i].Nombre;

        cout << "ISBN del Libro: ";
        cin >> Informacion[i].ISBN;


        cout << "Numero de paginas del Libro: ";
        cin >> Informacion[i].NPaginas;

        cout << "Nombre del Autor del Libro: ";
        cin >> Informacion[i].Autor;

        cout << endl;
        system("cls");

    }

}

void Imprimir() // aqui se imprimen los datos de los libros
{

    for (int X = 0; X < 6; X++)
    {

        cout << "\nNombre del Libro: " << Informacion[X].Nombre << endl;

        cout << "ISBN del Libro: " << Informacion[X].ISBN << endl;

        cout << "Numero de paginas del Libro: " << Informacion[X].NPaginas << endl;

        cout << "Nombre del Autor del Libro: " << Informacion[X].Autor << endl;
        cout << endl;

    }

}

void quicksort(int Start, int End) // se inicia el quicksort
{

    int Pivote;

    if (Start < End)
    {

        Pivote = divide(Start, End); // se utiliza un pivote

        quicksort(Start, Pivote - 1); 
        quicksort(Pivote + 1, End);

    }

}

int divide(int Start, int End) // aqui se define hasia que lado se movera el  pivote
{

    int Izquierda;
    int Derecha;
    int Pivote;




    Libro Temporal;


    Pivote = Informacion[Start].ISBN;
    Izquierda = Start;
    Derecha = End;

    while (Izquierda < Derecha)
    {

        while (Informacion[Derecha].ISBN > Pivote)
        {

            Derecha--;

        }

        while ((Izquierda < Derecha) && (Informacion[Izquierda].ISBN <= Pivote))
        {

            Izquierda++;

        }

        if (Izquierda < Derecha)
        {

            Temporal = Informacion[Izquierda];
            Informacion[Izquierda] = Informacion[Derecha];
            Informacion[Derecha] = Temporal;

        }

    }

    Temporal = Informacion[Derecha];
    Informacion[Derecha] = Informacion[Start];
    Informacion[Start] = Temporal;

    return Derecha;

}


void buscar() // aqui empieza la busqueda de la imformacion
{
    int busq;
    int band = 0;

    cout << "Ingresa el ISBN del libro a buscar: ";
    cin >> busq;

    for (int i = 0; i < 6; i++)
    {
        if (Informacion[i].ISBN == busq)
        {
            band = 1;
            cout << "Libro encontrado." << endl;
            cout << endl;
            cout << endl;

            cout << "\nNombre: " << Informacion[i].Nombre << endl;
            cout << "Nombre del Autor: " << Informacion[i].Autor << endl;
            cout << "ISBN: " << Informacion[i].ISBN << endl;
            cout << "Numero de paginas: " << Informacion[i].NPaginas << endl;
            cout << endl;

        }

        if (band == 0)
        {
            cout << "Libro no se encuentra";

        }

    }

}