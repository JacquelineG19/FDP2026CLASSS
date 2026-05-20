//  Día de la Semana, Pide un número del 1 al 7 e imprime el día de la semana correspondiente (1 = Lunes, 2 = Martes, etc.).
#include <iostream>

using namespace std;

int main () {
int n;

cout << "Bienvenido, por favor ingrese un numero del 1 al 7" << endl;
cin >> n;

switch (n) 
{
    case 1: 
     cout << "El día de la semana es Lunes" << endl;
     break;
    case 2:
     cout << "El dia de la semana es Martes" << endl;
     break;
    case 3:
     cout << "El dia de la semana es Miercoles" << endl;
     break;
    case 4:
     cout << "El dia de la semana es Jueves" << endl;
     break;
    case 5: 
     cout << "El dia de la semana es Viernes" << endl;
     break;
    case 6: 
     cout << "El dia de la semana es Sabado" << endl;
     break;
     case 7: 
     cout << "El dia de la semana es Domingo" << endl;
     break;
    default:
     cout << "datos incorrectos" << endl;
     break;
}

return 0;
}