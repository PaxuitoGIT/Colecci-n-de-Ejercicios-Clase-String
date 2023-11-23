#include <iostream>
#include <string>

int main() {
    std::string frase = "Hola gente";
    std::cout << "Tamaño de la frase: " << frase.size() << std::endl;
    std::cout << "Esta vacia la frase? " << frase.empty() << std::endl;
    return 0;
}