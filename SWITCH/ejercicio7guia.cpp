// Conversión de Monedas, Pide una opción (1 = USD a EUR, 2 = USD a JPY, 3 = USD a GBP) y realiza la conversión.
#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int opcion;
    float usd=0, resultado=0;

    cout << "Bienvenido a calculadora de conversion de monedas" << endl;
    cout << "Ingrese la cantidad de USD que desea convertir: ";
    cin >> usd;

    cout << "Por favor seleccione una opcion: " << endl;
    cout << "1. USD a EUR" << endl;
    cout << "2. USD a JPY" << endl;
    cout << "3. USD a GBP" << endl;
    cout << "4. Salir" << endl;
    cout << "Opcion: ";
    cin >> opcion;

     if (opcion < 1 || opcion > 4)
    {
        cout << "Opción no válida. Por favor, elija una opción del 1 al 4." << endl;
        return 1; 
    }

switch (opcion)
    {
    case 1: 
        resultado = usd*0.65;
        cout << "Los USD en EUR son los siguientes: " << resultado << endl;

        break;
    case 2: 
       resultado = usd*0.89;
        cout << "Los USD en JPY son los siguientes: " << resultado << endl;
        break;
    case 3: 
       resultado = usd*0.98;
        cout << "Los USD en GBP son los siguientes: " << resultado << endl;
        break;
    case 4:
        cout << "Saliendo del programa. ¡Hasta pronto!" << endl;
        return 0;
        break;

    default:
        cout << "Opcion no valida. Por favor, elija una opcion del 1 al 4." << endl;
        break;
        return 1;
    }
        
    
return 0;
}

