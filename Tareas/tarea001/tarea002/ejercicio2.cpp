#include <iostream>
#include <string>
using namespace std;

//  ver si los lados pueden formar un triángulo
bool es_valido(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}
// para ver el tipo de triángulo
string tipo_triangulo(int a, int b, int c) {
    if (a == b && b == c) {
        return "equilatero";
    } else if (a == b || a == c || b == c) {
        return "isosceles";
    } else {
        return "escaleno";
    }
}
 //calculat perimetro
int calcular_perimetro(int a, int b, int c) {
    return a + b + c;
}

void describir_triangulo(int a, int b, int c) {
    if (!es_valido(a, b, c)) {
        cout << "Triangulo invalido." << endl;
        return;
    }
    
    string tipo = tipo_triangulo(a, b, c);
    int perimetro = calcular_perimetro(a, b, c);
    
    cout << "Tipo: " << tipo << endl;
    cout << "Perimetro: " << perimetro << endl;
}
 // funcipn principal
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    describir_triangulo(a, b, c);
    
    return 0;
}


 

