#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase = "Hola, mundo!";
    string subcadena = frase.substr(0, 5);
    cout << "Subcadena: " << subcadena << endl;
    frase.insert(5, " querido");
    cout << "Frase después de la inserción: " << frase << endl;
    return 0;
}