#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase = "Hola gente";
    size_t pos = frase.find("gente");
    cout << "Posicion de la palabra 'gente': " << pos << endl;
    frase.replace(pos, 5, "mundo");
    cout << "Frase despues del reemplazo: " << frase << endl;
    return 0;
}