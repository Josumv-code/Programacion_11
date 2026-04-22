#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N, Q; 
    cin >> N >> Q; 
    int vagones[100] = {0}; // //vagones en 0
    for (int i = 0; i < Q; i++) { 
        string operacion; // operacion
        cin >> operacion; 
        if (operacion == 'A') { 
            int p, v;
            cin >> p >> v;
            for (int j = 0; j < p; j++) { // añadir v
                vagones[j] += v;
            }
        } else if (operacion == 'C') {
            int p;
            cin >> p;
            cout << vagones << endl; // retorna vagones
        }
        
    }
}   

//que dificl :(
//no se porq me tira error en la operacion == A :(
