#include <iostream>

using namespace std;

int main () {

    int numero1, numero2, numero3;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    cout << "Ingrese el tercer numero: ";
    cin >> numero3;

    int promedio = (numero1+numero2+numero3)/3;

    cout << "El promedio de los tres numeros es: " << promedio << endl;

    return 0;


}