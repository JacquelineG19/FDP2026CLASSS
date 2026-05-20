#include <iostream>
#include <cmath> //para utilizar la función pow

using namespace std;

int main () 
{
int y, x;

//Solicita el usuario  un numero
cout << "Please enter a number: " << endl;
cin >> y;

// Calcular x = y^y
x = pow(y, y);
cout << "El valor de x es: " << x << endl;
//Tarea investigar porque da 0 

//Determina si x es par o impar 

if (x % 2 == 0)
{
    cout << "The number: " << x << " is even. " << endl;

}
else 
{
    cout << "The number: " << x << "is odd. " << endl; 
}

//Bloque adicional para determinar si es positivo o negstivo 
if (y < 0) {

}
return 0;
}