#include <iostream>

using namespace std;

int main () {
    int res, n=0;
    cout << "Hola, podrias ingresae un numero entero ";
    cin >> n;

    res = n % 2;

    cout << n << endl;

    switch (res){
    case 1:
    cout << n << "Es un numero impar/n";
    break;
    case 0: 
    cout << n << "Es un numero par/n";
    break;
    default:
    cout << n << "datos incorrectos";
    break;

    }

    return 0;
    
}
