#include <iostream>
#include <iomanip>
using namespace std;

  int main() { 
    // declaracion de las constantes de vs, gc y t
    const double vs = 331.0;
    const double gc = 0.6;
    const double t = -273.15;
    double v , T;
    // pedir los datos y la velocidad y la temperatura en kelvin
    cout << "Ingrese la velocidad y la temperatura en kelvin" << endl;
    cin >> v >> T;
    
    double x = vs + gc*T;
 cout << x;

 double M = (v/x);
    cout << M;
 // validacion 
    if (v <= 0) {
        cout << "La velocidad debe ser postiva" << endl ;
        
 }
 
     else if (T <= 0) {
     cout << "La temperatura debe ser positiva"  << endl ;
     //Rangos presentes
 }
    if (M < 0.8) {
        cout << "El flujo es subsonico"  << endl ;
    }
    else if (M >= 0.8 && M < 1.2) {
        cout << "El flujo es transonico"  << endl;
    }
    else if (M >= 1.2 && M < 5.0) {
        cout << "El flujo es supersonico" << endl;
    }   
    else if ( M >= 5.0) {
        cout << "El flujo es hipersonico" << endl;
    }   
 cout << "La velocidad del sonido es de " << x << " m/s" << endl;
 cout << "El numero de Mach es de " << M  << endl;

}