#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //Declaracion de variables
    int edad;
    int tipo_de_dia;
    //Pedir datos
    cout << "Ingrese la edad de la persona" << endl;
    cin >> edad;
    cout << "Ingrese el tipo de dia, 1 para dia de semana, 2 para fin de semana" << endl;
    cin >> tipo_de_dia;
    //Validacion de errores
    if (edad < 0) {
        cout << "La edad no puede ser negativa" << endl;
        
    }
    if (tipo_de_dia != 1 && tipo_de_dia ! = 2){
        cout << "El tipo de dia debe ser 1 o 2" << endl;
    }
    //Calculo de la categoria
    string categoria;
    double precio; 

    if (edad < 12) {
        categoria = "niño";
        precio = 2500;
    }
    if (edad > 65) {
        categoria = "adulto mayor";
        precio = 2000;
    }
    // no supe como poner la del adullto :((

    //Calculo del recargo
    double recargo = 0;
    if (tipo_de_dia == 2){
        recargo = precio*0.2; // no se si esta bien poner 0.2 o 20/100 :((
    }
    
    //Total
    double total = precio + recargo;

    //imprimir los resultadosss
    cout << "categoria" << categoria << endl;
    cout << "precio base" << precio << endl;
    cout << "recargo" << recargo << endl;
    cout << "total" << total << endl;

 }

