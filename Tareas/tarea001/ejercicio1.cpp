#include <iostream>
#include <iomanip>
using namespace std;

int main() { 
    // Declaracion de la constante de gravedad y los valores de altura y tiempo
    const double Gravedad = 9.8 ;
    double altura_ventana ;
    double tiempo;

 // Pedir los datos de el tiempo y la altura de la ventana
   cout << "Ingrese el tiempo que tarda en caer el objeto" << endl;
   cin >> tiempo;
   cout << "Ingrese la altura de la ventana" << endl;
   cin >> altura_ventana;

 // Validacion de errores
 if (tiempo <= 0) {
    cout << "El tiempo debe ser postivo" << '\n' << endl;
 }
 if (altura_ventana <= 0) {
 cout << "La altura de la ventana debe ser positiva" << '\n' << endl;
 }
 // Calculo de las ecuaciones 
   double altura_calculada = 0.5 * Gravedad * tiempo * tiempo;
   double tiempo_calculado = sqrt((2 * altura_ventana) / Gravedad);

   // Imprimir los resultados
   cout << "La altura calculada es" << altura_calculada << endl;
   cout << "El tiempo calculado es" << tiempo_calculado << endl;
   return 0;
}