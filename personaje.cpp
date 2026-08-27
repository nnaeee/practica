#include <iostream>
using namespace std;

string nombre = "kio";
int edad = 24;
int vida = 500;
int fuerza = 200;
int defensa = 100;
float velocidad = 15.5;
bool estaVivo = true;
bool tieneLLave = false;
int monedas = 0;


int main() {
    cout << "" << endl;
    cout << "ficha tecnica:" << endl;
    cout << "mi personaje: " << nombre << endl;
    cout << "edad: " << edad << endl;
    cout << "velocidad: " << velocidad << endl;
    cout << "está vivo?: " << estaVivo << endl;
    cout << "tiene llave?: " << tieneLLave << endl;
    cout << "monedas: " << monedas << endl;
    cout << "" << endl;

    cout << "atacamos nuestro personaje con 100 de daño" << endl;
    vida -= 100;
    cout << "vida actual:" << vida << endl;

    return 0;

}

e 