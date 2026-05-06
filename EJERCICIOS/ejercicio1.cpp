#include <iostream>
using namespace std;
int main() {
    int a,b;

    cout << "Ingrese el primer numero: ";
    cin >> a;
    
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    
    //Operaciones aritméticas
    int suma = a + b;
    int diferencia = a - b;
    int producto = a * b;
    int division = a / b;
    int division2 = a % b; 

    //Mostrar resultdos
    cout << "suma: " << suma << endl;
    cout << "diferencia: " << diferencia << endl;
    cout << "producto: " << producto  << endl;
    cout << "division entera: " << division << endl;
    cout << "residuo: " << division2 << endl;

    return 0;
}