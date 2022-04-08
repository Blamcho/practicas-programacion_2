// ingreso de un numero
// Abraham Torres
#include <iostream>
#include<string>
using namespace std;


struct nodo
{
    char caracter;
    nodo* next;
};

// se crea una lista
class cola
{
    nodo* rear, * front;
public:
   
    cola()
    {
        
        rear = NULL; front = NULL;
    }
    void insertarDatos(int);
    void qdisplay();
    ~cola();
};


void cola::insertarDatos(int newcaracter)
{
   
    nodo* temp;
  
    temp = new nodo;
    
    temp->caracter = newcaracter;
    
    temp->next = NULL;
    
    if (rear == NULL)
    {
     
        rear = temp;
        
        
        front = temp;
    }
    
    else
    {
        
        rear->next = temp;
        rear = temp;
    }

}

//Metodo para mostrar datos
void cola::qdisplay()
{
   
    nodo* temp = front;
   
    while (temp != NULL)
    {
        cout << temp->caracter << endl;
        
        temp = temp->next;
    }
}


//Destructo borra dato por dato
cola::~cola()
{
    while (front != NULL)
    {
        nodo* temp = front;
        front = front->next;
        delete temp;
    }
}




int reverseNumber(int n)
{
    //  variables estaticas
    static int temp, sum;

  
    if (n > 0)
    {

        temp = n % 10;
        sum = sum * 10 + temp;

        reverseNumber(n / 10);

    }
    else
    {

        return sum;
    }

}

int main()
{
    
    string stringTransformation;
    int n, reverse;

    cout << "Ingresa un numero entero: " << endl;
    cin >> n;

    reverse = reverseNumber(n);

    cout << "EL numero invertido de lo que se ingreso es: " << endl;;
    cout << reverse << endl;

    
    stringTransformation = to_string(reverse);

    
    cola estructuradeDatos;

    
    for (int i = 0; i < stringTransformation.length(); i++)
    {
        
        estructuradeDatos.insertarDatos(stringTransformation[i]);
    }

    cout << "Ordenamiento reverso del numero entero original usando colas: " << endl;
    
    estructuradeDatos.qdisplay();

    return 0;
