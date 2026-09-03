#include <iostream>
#include <string>

using namespace std;

// Variables globales
string nombre = "kio";
int edad = 24;
int vida = 500;
int fuerza = 200;
int defensa = 100;
float velocidad = 15.5;
bool estaVivo = true;
bool tieneLlave = false;
int monedas = 0;
int nivel = 1;

// Función para verificar si el personaje está vivo
string personajevivo(int vidaActual) {
    if (vidaActual > 0) {
        return "si";
    } else {
        return "no";
    }
}

// Función para verificar si tiene la llave
string llaveenmano(bool poseeLlave) {
    if (poseeLlave) {
        return "si, tiene llave";
    } else {
        return "no, no tiene llave";
    }
}

int main() {
    cout << endl;
    cout << "ficha tecnica:" << endl;
    cout << "mi personaje: " << nombre << endl;
    cout << "edad: " << edad << endl;
    cout << "velocidad: " << velocidad << endl;
    cout << "esta vivo?: " << personajevivo(vida) << endl;
    cout << "tiene llave?: " << llaveenmano(tieneLlave) << endl;
    cout << "monedas: " << monedas << endl;
    cout << endl;
    
        cout << "tratando de entrar al area 51..." << endl;
    cout << "el nivel requerido es 5 y se necesita una llave" << endl;

     if (nivel >= 5 && tieneLlave == true)
     {
         cout << "ha ingresado al area 51" << end1;
        }else{
         cout << "los secretos del area 51 siguen ocultos para Ud" << endl;
        }

    cout << "atacamos nuestro personaje con 100 de dano" << endl;
    vida = vida - 100; // Resta 100 de daño a la vida actual

    cout << "por haber encontrado la llave, has subido 4 niveles" << endl;

    nivel = nivel + 4;
     if (nivel >= 5 && tieneLlave == true)
     {

            cout << "tratando de entrar al area 51..." << endl;
    cout << "el nivel requerido es 5 y se necesita una llave" << endl;

     if (nivel >= 5 && tieneLlave == true)
     {
         cout << "ha ingresado al area 51" << end1;
        }else{
         cout << "los secretos del area 51 siguen ocultos para Ud" << endl;
        }
     }
    cout << endl;
    cout << "ficha tecnica:" << endl;
    cout << "mi personaje: " << nombre << endl;
    cout << "edad: " << edad << endl;
    cout << "velocidad: " << velocidad << endl;
    cout << "esta vivo?: " << personajevivo(vida) << endl;
    cout << "tiene llave?: " << llaveenmano(tieneLlave) << endl;
    cout << "monedas: " << monedas << endl;
    cout << endl;

    cout << "ahora kio asalta al enemigo y le roba 10 monedas" << endl;
    monedas = monedas + 10;

    cout << endl;
    cout << "ficha tecnica:" << endl;
    cout << "mi personaje: " << nombre << endl;
    cout << "edad: " << edad << endl;
    cout << "velocidad: " << velocidad << endl;
    cout << "esta vivo?: " << personajevivo(vida) << endl;
    cout << "tiene llave?: " << llaveenmano(tieneLlave) << endl;
    cout << "monedas: " << monedas << endl;
    cout << endl;

    return 0;
}