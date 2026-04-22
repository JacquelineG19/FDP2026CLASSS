#include <iostream>

using namespace std;

int main () {

    int numeroc;

    cout << "Ingrese los grados Celcius que desea convertir a grados Fahrenheit: ";
    cin >> numeroc;

    int f = ( numeroc * 9/5)+32;

    cout << "Los grados Celcius en grados Fahrenheit son los siguientes: " << f << endl;

    return 0;
}