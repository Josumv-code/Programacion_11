
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Declaracion de variables
    int gasto_kwh;
    int tarifa_social;
    //Pedir datos
    cout << "Ingrese el consumo de kwh" <<endl;
    cin >> gasto_kwh;
    cout << " Ingrese si el hogar tiene tarfica social 1 para si, 2 para no" << endl;
    cin >> tarifa_social;
    //Validacion
     if (gasto_kwh < 0) {
        cout << "El consumo no puede ser negativo"  << endl;
    }
     if  (tarifa_social != 1 && tarifa_social != 2) {
            cout << "El valor de la tarifa tiene que ser 1 o 2" << endl;
        }
    //calculo del subtotal
    double subtotal;
    if (gasto_kwh <= 200){
        subtotal = gasto_kwh * 75;
    } // que desorden no supe como hacer toda esta parte ;((
    
    //calculo del descuento
    double descuento = 0;
    if ( tarifa_social == 1 && gasto_kwh <= 200){
        descuento = subtotal * 0.4;
    }










}