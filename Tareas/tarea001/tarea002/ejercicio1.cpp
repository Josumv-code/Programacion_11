#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool es_palindromo(string palabra) {
    int i = 0; // contador
 int n = palabra.length(); // largo de la palabra
 for (int i = 0; i < n/2; i++){ // revisa hasta la mitad de la palabra
    if (tolower(palabra[i]) != tolower(palabra[n - 1 - i])){  // compara la letra de la izquierda con la de la derecha
        return false; // mitades distintas
     }
   }
   return true;   
 }


 int main() {
    string palabra; 
    cin >> palabra;
    
    if (es_palindromo(palabra)) {
        cout << "\"" << palabra << "\" es un palindromo." << endl;
    } else {
        cout << "\"" << palabra << "\" no es un palindromo." << endl;
    }
    
    return 0;  
}


